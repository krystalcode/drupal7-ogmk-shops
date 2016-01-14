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

  // Exported OG Role: 'node:shop:administrator'.
  $roles['node:shop:administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'shop',
    'name' => 'administrator',
  );

  /**
   * @Issue(
   *   "Maybe the 'merchant' role should be renamed to 'manager'"
   *   type="task"
   *   priority="normal"
   * )
   */
  // Exported OG Role: 'node:shop:merchant'.
  $roles['node:shop:merchant'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'shop',
    'name' => 'merchant',
  );

  return $roles;
}
