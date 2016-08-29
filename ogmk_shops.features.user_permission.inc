<?php
/**
 * @file
 * ogmk_shops.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_shops_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ogmk_shop content'.
  $permissions['create ogmk_shop content'] = array(
    'name' => 'create ogmk_shop content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_shop content'.
  $permissions['delete any ogmk_shop content'] = array(
    'name' => 'delete any ogmk_shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_shop content'.
  $permissions['delete own ogmk_shop content'] = array(
    'name' => 'delete own ogmk_shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_shop content'.
  $permissions['edit any ogmk_shop content'] = array(
    'name' => 'edit any ogmk_shop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_shop content'.
  $permissions['edit own ogmk_shop content'] = array(
    'name' => 'edit own ogmk_shop content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
