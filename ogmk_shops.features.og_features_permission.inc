<?php
/**
 * @file
 * ogmk_shops.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ogmk_shops_og_features_default_permissions() {
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

  // Exported og permission: 'node:ogmk_shop:administer commerce_order entities'
  $permissions['node:ogmk_shop:administer commerce_order entities'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:administer commerce_product entities'
  $permissions['node:ogmk_shop:administer commerce_product entities'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:ogmk_shop:create commerce_order entities'
  $permissions['node:ogmk_shop:create commerce_order entities'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:create commerce_order entities of bundle commerce_order'
  $permissions['node:ogmk_shop:create commerce_order entities of bundle commerce_order'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:create commerce_product entities'
  $permissions['node:ogmk_shop:create commerce_product entities'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
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

  // Exported og permission: 'node:ogmk_shop:edit any commerce_order entity'
  $permissions['node:ogmk_shop:edit any commerce_order entity'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:edit any commerce_order entity of bundle commerce_order'
  $permissions['node:ogmk_shop:edit any commerce_order entity of bundle commerce_order'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:edit any commerce_product entity'
  $permissions['node:ogmk_shop:edit any commerce_product entity'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:edit own commerce_order entities'
  $permissions['node:ogmk_shop:edit own commerce_order entities'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:edit own commerce_order entities of bundle commerce_order'
  $permissions['node:ogmk_shop:edit own commerce_order entities of bundle commerce_order'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:edit own commerce_product entities'
  $permissions['node:ogmk_shop:edit own commerce_product entities'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:have the administrator member role'
  $permissions['node:ogmk_shop:have the administrator member role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:have the manager member role'
  $permissions['node:ogmk_shop:have the manager member role'] = array(
    'roles' => array(
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:have the member role'
  $permissions['node:ogmk_shop:have the member role'] = array(
    'roles' => array(
      'member' => 'member',
    ),
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

  // Exported og permission: 'node:ogmk_shop:view any commerce_order entity'
  $permissions['node:ogmk_shop:view any commerce_order entity'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:view any commerce_order entity of bundle commerce_order'
  $permissions['node:ogmk_shop:view any commerce_order entity of bundle commerce_order'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:view any commerce_product entity'
  $permissions['node:ogmk_shop:view any commerce_product entity'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:view any unpublished ogmk_product content'
  $permissions['node:ogmk_shop:view any unpublished ogmk_product content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:view own commerce_order entities'
  $permissions['node:ogmk_shop:view own commerce_order entities'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:view own commerce_order entities of bundle commerce_order'
  $permissions['node:ogmk_shop:view own commerce_order entities of bundle commerce_order'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:view own commerce_product entities'
  $permissions['node:ogmk_shop:view own commerce_product entities'] = array(
    'roles' => array(),
  );

  return $permissions;
}
