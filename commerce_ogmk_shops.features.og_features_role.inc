<?php
/**
 * @file
 * commerce_ogmk_shops.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function commerce_ogmk_shops_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:shop:manager member'.
  $roles['node:shop:manager member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'shop',
    'name' => 'manager member',
  );

  return $roles;
}
