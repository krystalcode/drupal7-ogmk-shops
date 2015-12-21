<?php
/**
 * @file
 * commerce_ogmk_shops.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function commerce_ogmk_shops_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ogmk_shop_manage';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
        'shop' => 'shop',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*/manage' => 'node/*/manage',
        'node/*/manage/orders' => 'node/*/manage/orders',
        'node/*/manage/orders/*' => 'node/*/manage/orders/*',
        'node/*/manage/products' => 'node/*/manage/products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-shop' => array(
          'module' => 'menu',
          'delta' => 'menu-shop',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['ogmk_shop_manage'] = $context;

  return $export;
}
