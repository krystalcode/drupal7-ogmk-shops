<?php
/**
 * @file
 * commerce_ogmk_shops.features.inc
 */

/**
 * Implements hook_node_info().
 */
function commerce_ogmk_shops_node_info() {
  $items = array(
    'shop' => array(
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
  $items['shop_item'] = entity_import('og_membership_type', '{ "name" : "shop_item", "description" : "Shop Item", "language" : "" }');
  $items['shop_member'] = entity_import('og_membership_type', '{ "name" : "shop_member", "description" : "Shop Member", "language" : "" }');
  return $items;
}
