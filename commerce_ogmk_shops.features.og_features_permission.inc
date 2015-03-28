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

  // Exported og permission: 'node:shop:add user'
  $permissions['node:shop:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:administer group'
  $permissions['node:shop:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:approve and deny subscription'
  $permissions['node:shop:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:manage members'
  $permissions['node:shop:manage members'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:manage permissions'
  $permissions['node:shop:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:manage roles'
  $permissions['node:shop:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:subscribe'
  $permissions['node:shop:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:subscribe without approval'
  $permissions['node:shop:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:unsubscribe'
  $permissions['node:shop:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update group'
  $permissions['node:shop:update group'] = array(
    'roles' => array(),
  );

  return $permissions;
}
