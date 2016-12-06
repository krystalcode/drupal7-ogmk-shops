<?php
/**
 * @file
 * ogmk_shops.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ogmk_shops_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ogmk_shop.
  $config['node:ogmk_shop'] = array(
    'instance' => 'node:ogmk_shop',
    'config' => array(
      'description' => array(
        'value' => '[node:ogmk-text-with-summary:value]',
      ),
      'image_src' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'itemtype' => array(
        'value' => 'LocalBusiness',
      ),
      'itemprop:description' => array(
        'value' => '[node:ogmk-text-with-summary:value]',
      ),
      'itemprop:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'og:type' => array(
        'value' => 'company',
      ),
      'og:description' => array(
        'value' => '[node:ogmk-text-with-summary:value]',
      ),
      'og:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:description' => array(
        'value' => '[node:ogmk-text-with-summary:value]',
      ),
      'twitter:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
    ),
  );

  return $config;
}
