<?php
/**
 * @file
 * commerce_ogmk_shops.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_ogmk_shops_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commerce_ogmk_shops_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function commerce_ogmk_shops_node_info() {
  $items = array(
    'ogmk_shop' => array(
      'name' => t('Shop'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_og_membership_type().
 */
function commerce_ogmk_shops_default_og_membership_type() {
  $items = array();
  $items['ogmk_shop_item'] = entity_import('og_membership_type', '{ "name" : "ogmk_shop_item", "description" : "Shop Item", "language" : "" }');
  $items['ogmk_shop_member'] = entity_import('og_membership_type', '{ "name" : "ogmk_shop_member", "description" : "Shop Member", "language" : "" }');
  return $items;
}
