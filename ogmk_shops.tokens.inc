<?php

/**
 * @file
 * Builds placeholder replacement tokens for user-related shop data.
 */

/**
 * Implements hook_token_info().
 */
function ogmk_shops_token_info() {
  $user['ogmk-shop-id'] = array(
    'name' => t('Shop ID'),
    'description' => t("The ID of the shop owned by the user."),
  );
  $user['ogmk-shop-url'] = array(
    'name' => t('Shop URL'),
    'description' => t("The url to the shop owned by the user."),
  );
  $user['ogmk-shop-manage-url'] = array(
    'name' => t('Shop Manage URL'),
    'description' => t("The url to the management page for the shop owned by the user."),
  );

  return array(
    'tokens' => array('user' => $user),
  );
}

/**
 * Implements hook_tokens().
 */
function ogmk_shops_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'user' && !empty($data['user'])) {
    $account = $data['user'];
    $shopId  = ogmk_shops_user_has_shop($account);

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Basic user account information.
        case 'ogmk-shop-id':
          // In the case of hook user_presave uid is not set yet.
          $replacements[$original] = !empty($shopId) ? $shopId : t('not yet assigned');
          break;

        case 'ogmk-shop-url':
          $replacements[$original] = !empty($shopId) ? url("node/$shopId", $url_options) : t('not yet assigned');
          break;

        case 'ogmk-shop-manage-url':
          $replacements[$original] = !empty($shopId) ? url("node/$shopId/manage", $url_options) : t('not yet assigned');
          break;
      }
    }
  }

  return $replacements;
}
