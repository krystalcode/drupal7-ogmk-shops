<?php
/**
 * @file
 * ogmk_shops.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function ogmk_shops_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:ogmk_shop:manager member'.
  $roles['node:ogmk_shop:manager member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'ogmk_shop',
    'name' => 'manager member',
  );

  return $roles;
}
