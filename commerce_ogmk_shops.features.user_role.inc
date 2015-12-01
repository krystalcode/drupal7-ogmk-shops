<?php
/**
 * @file
 * commerce_ogmk_shops.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function commerce_ogmk_shops_user_default_roles() {
  $roles = array();

  // Exported role: merchant.
  $roles['merchant'] = array(
    'name' => 'merchant',
    'weight' => 2,
  );

  return $roles;
}
