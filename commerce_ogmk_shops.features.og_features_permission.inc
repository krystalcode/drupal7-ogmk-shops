<?php
/**
 * @file
 * commerce_ogmk_shops.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function commerce_ogmk_shops_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:ogmk_shop:access authoring options of ogmk_product content'
  $permissions['node:ogmk_shop:access authoring options of ogmk_product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:access publishing options of ogmk_product content'
  $permissions['node:ogmk_shop:access publishing options of ogmk_product content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:access revisions options of ogmk_product content'
  $permissions['node:ogmk_shop:access revisions options of ogmk_product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:add user'
  $permissions['node:ogmk_shop:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:administer group'
  $permissions['node:ogmk_shop:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:approve and deny subscription'
  $permissions['node:ogmk_shop:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:create ogmk_product content'
  $permissions['node:ogmk_shop:create ogmk_product content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:delete any ogmk_product content'
  $permissions['node:ogmk_shop:delete any ogmk_product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:delete own ogmk_product content'
  $permissions['node:ogmk_shop:delete own ogmk_product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:manage members'
  $permissions['node:ogmk_shop:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:manage permissions'
  $permissions['node:ogmk_shop:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:manage roles'
  $permissions['node:ogmk_shop:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:subscribe'
  $permissions['node:ogmk_shop:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:subscribe without approval'
  $permissions['node:ogmk_shop:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:unsubscribe'
  $permissions['node:ogmk_shop:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:update any ogmk_product content'
  $permissions['node:ogmk_shop:update any ogmk_product content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:update group'
  $permissions['node:ogmk_shop:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:update own ogmk_product content'
  $permissions['node:ogmk_shop:update own ogmk_product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:view any unpublished ogmk_product content'
  $permissions['node:ogmk_shop:view any unpublished ogmk_product content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  return $permissions;
}
