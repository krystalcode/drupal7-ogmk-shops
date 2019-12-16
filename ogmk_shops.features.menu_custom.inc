<?php

/**
 * @file
 * ogmk_shops.features.menu_custom.inc
 */

/**
 * @Issue(
 *   "Disable the shop management menu block title via hook_enable"
 *   type="bug"
 *   priority="low"
 * )
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ogmk_shops_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: ogmk-shop-manage.
  $menus['ogmk-shop-manage'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'title' => 'Shop Management Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Shop Management Menu');

  return $menus;
}
