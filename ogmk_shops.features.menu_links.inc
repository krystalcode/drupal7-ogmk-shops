<?php

/**
 * @file
 * ogmk_shops.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ogmk_shops_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: ogmk-shop-manage_add-product:menutoken/56848cfd7304b.
  $menu_links['ogmk-shop-manage_add-product:menutoken/56848cfd7304b'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/56848cfd7304b',
    'router_path' => 'menutoken/%',
    'link_title' => 'Add Product',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'ogmk-shop-manage_add-product:menutoken/56848cfd7304b',
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'plus',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/add/ogmk-product?ogmk_shop_ref=[node:nid]',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: ogmk-shop-manage_back-to-shop-front:menutoken/57c343d11be80.
  $menu_links['ogmk-shop-manage_back-to-shop-front:menutoken/57c343d11be80'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/57c343d11be80',
    'router_path' => 'menutoken/%',
    'link_title' => 'Back to Shop Front',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'arrow-left',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/[node:nid]',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
        'title_localize' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'ogmk-shop-manage_back-to-shop-front:menutoken/57c343d11be80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: ogmk-shop-manage_dashboard:menutoken/569540b3c9c35.
  $menu_links['ogmk-shop-manage_dashboard:menutoken/569540b3c9c35'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/569540b3c9c35',
    'router_path' => 'menutoken/%',
    'link_title' => 'Dashboard',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'dashboard',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/[node:nid]/manage',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'ogmk-shop-manage_dashboard:menutoken/569540b3c9c35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: ogmk-shop-manage_orders:menutoken/569566344bc38.
  $menu_links['ogmk-shop-manage_orders:menutoken/569566344bc38'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/569566344bc38',
    'router_path' => 'menutoken/%',
    'link_title' => 'Orders',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'cubes',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/[node:nid]/manage/orders',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'ogmk-shop-manage_orders:menutoken/569566344bc38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: ogmk-shop-manage_products:menutoken/569568edd8e4e.
  $menu_links['ogmk-shop-manage_products:menutoken/569568edd8e4e'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/569568edd8e4e',
    'router_path' => 'menutoken/%',
    'link_title' => 'Products',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'cube',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/[node:nid]/manage/products',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'ogmk-shop-manage_products:menutoken/569568edd8e4e',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: ogmk-shop-manage_shop:menutoken/5695411d556d0.
  $menu_links['ogmk-shop-manage_shop:menutoken/5695411d556d0'] = array(
    'menu_name' => 'ogmk-shop-manage',
    'link_path' => 'menutoken/5695411d556d0',
    'router_path' => 'menutoken/%',
    'link_title' => 'Shop',
    'options' => array(
      'icon' => array(
        'bundle' => 'fontawesome',
        'icon' => 'home',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'menu_token_link_path' => 'node/[node:nid]/edit',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'ogmk_og_context_shop',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'ogmk-shop-manage_shop:menutoken/5695411d556d0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Product');
  t('Back to Shop Front');
  t('Dashboard');
  t('Orders');
  t('Products');
  t('Shop');

  return $menu_links;
}
