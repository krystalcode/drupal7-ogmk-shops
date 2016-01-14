<?php
/**
 * @file
 * commerce_ogmk_shops.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function commerce_ogmk_shops_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create shop content'.
  $permissions['create shop content'] = array(
    'name' => 'create shop content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any shop content'.
  $permissions['delete any shop content'] = array(
    'name' => 'delete any shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own shop content'.
  $permissions['delete own shop content'] = array(
    'name' => 'delete own shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any shop content'.
  $permissions['edit any shop content'] = array(
    'name' => 'edit any shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own shop content'.
  $permissions['edit own shop content'] = array(
    'name' => 'edit own shop content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
