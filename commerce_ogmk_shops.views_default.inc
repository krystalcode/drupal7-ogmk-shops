<?php
/**
 * @file
 * commerce_ogmk_shops.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commerce_ogmk_shops_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ogmk_shop_manage_order';
  $view->description = '';
  $view->tag = 'commerce, ogmk';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'Shop Management: Order';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Order';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_products_ref']['id'] = 'field_products_ref';
  $handler->display->display_options['relationships']['field_products_ref']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_products_ref']['field'] = 'field_products_ref';
  $handler->display->display_options['relationships']['field_products_ref']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['field_products_ref']['required'] = TRUE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'field_products_ref';
  $handler->display->display_options['fields']['field_images']['label'] = 'Product';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => '100x80',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Field: Shop */
  $handler->display->display_options['fields']['og_shop_ref']['id'] = 'og_shop_ref';
  $handler->display->display_options['fields']['og_shop_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_shop_ref']['field'] = 'og_shop_ref';
  $handler->display->display_options['fields']['og_shop_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_products_ref';
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['sku']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = 'Variant';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[sku] / [title]';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Contextual filter: Field: Shop (og_shop_ref) */
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['id'] = 'og_shop_ref_target_id';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['field'] = 'og_shop_ref_target_id';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['validate']['type'] = 'og';
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['order_id']['specify_validation'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/manage/orders/%';
  $translatables['ogmk_shop_manage_order'] = array(
    t('Master'),
    t('Order'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Products referenced by commerce_product'),
    t('Node referencing products from field_products_ref'),
    t('Product'),
    t('Shop'),
    t('Title'),
    t('SKU'),
    t('Variant'),
    t('[sku] / [title]'),
    t('Unit price'),
    t('Quantity'),
    t('.'),
    t(','),
    t('Total'),
    t('All'),
    t('Page'),
  );
  $export['ogmk_shop_manage_order'] = $view;

  $view = new view();
  $view->name = 'ogmk_shop_manage_orders';
  $view->description = '';
  $view->tag = 'commerce, ogmk';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Shop Management: Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Orders';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no orders with the selected status.';
  $handler->display->display_options['empty']['area']['format'] = 'basic_html';
  /* Relationship: OG membership: OG membership from Commerce Order */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['label'] = 'Order membership';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Shop node';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['uid']['label'] = 'Shop owner';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: User: Shops you own */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['relationship'] = 'uid';
  $handler->display->display_options['fields']['og_user_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_user_node']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['path'] = 'node/[og_user_node]/manage/orders/[order_id]';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Sort criterion: Commerce Order: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'commerce_order';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
  );
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/manage/orders';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all orders';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no pending orders for your shop. You can view all order <a href="node/[og_user_node]/manage/orders">here</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'basic_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $translatables['ogmk_shop_manage_orders'] = array(
    t('Master'),
    t('Orders'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There are currently no orders with the selected status.'),
    t('Order membership'),
    t('Shop node'),
    t('Shop owner'),
    t('Shops you own'),
    t('Order ID'),
    t('Last Updated'),
    t('Total'),
    t('Status'),
    t('All'),
    t('Page'),
    t('more'),
    t('Block'),
    t('View all orders'),
    t('There are currently no pending orders for your shop. You can view all order <a href="node/[og_user_node]/manage/orders">here</a>.'),
  );
  $export['ogmk_shop_manage_orders'] = $view;

  $view = new view();
  $view->name = 'ogmk_shop_manage_products';
  $view->description = '';
  $view->tag = 'commerce, ogmk';
  $view->base_table = 'node';
  $view->human_name = 'Shop Management: Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = 'Image';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = 'Title';
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category_ref']['id'] = 'field_category_ref';
  $handler->display->display_options['fields']['field_category_ref']['table'] = 'field_data_field_category_ref';
  $handler->display->display_options['fields']['field_category_ref']['field'] = 'field_category_ref';
  $handler->display->display_options['fields']['field_category_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Button link */
  $handler->display->display_options['fields']['view_node_button']['id'] = 'view_node_button';
  $handler->display->display_options['fields']['view_node_button']['table'] = 'node';
  $handler->display->display_options['fields']['view_node_button']['field'] = 'view_node_button';
  $handler->display->display_options['fields']['view_node_button']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_button']['text'] = 'View';
  $handler->display->display_options['fields']['view_node_button']['style'] = 'info';
  $handler->display->display_options['fields']['view_node_button']['size'] = 'xs';
  /* Field: Content: Edit button link */
  $handler->display->display_options['fields']['edit_node_button']['id'] = 'edit_node_button';
  $handler->display->display_options['fields']['edit_node_button']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node_button']['field'] = 'edit_node_button';
  $handler->display->display_options['fields']['edit_node_button']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_button']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_node_button']['style'] = 'warning';
  $handler->display->display_options['fields']['edit_node_button']['size'] = 'xs';
  /* Field: Content: Delete button link */
  $handler->display->display_options['fields']['delete_node_button']['id'] = 'delete_node_button';
  $handler->display->display_options['fields']['delete_node_button']['table'] = 'node';
  $handler->display->display_options['fields']['delete_node_button']['field'] = 'delete_node_button';
  $handler->display->display_options['fields']['delete_node_button']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node_button']['text'] = 'Remove';
  $handler->display->display_options['fields']['delete_node_button']['style'] = 'danger';
  $handler->display->display_options['fields']['delete_node_button']['size'] = 'xs';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node_button] [edit_node_button] [delete_node_button]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Shop (og_shop_ref) */
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['id'] = 'og_shop_ref_target_id';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['field'] = 'og_shop_ref_target_id';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_shop_ref_target_id']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/manage/products';
  $translatables['ogmk_shop_manage_products'] = array(
    t('Master'),
    t('Products'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Image'),
    t('Title'),
    t('Category'),
    t('Description'),
    t('Button link'),
    t('View'),
    t('Edit button link'),
    t('Edit'),
    t('Delete button link'),
    t('Remove'),
    t('Operations'),
    t('[view_node_button] [edit_node_button] [delete_node_button]'),
    t('All'),
    t('Page'),
  );
  $export['ogmk_shop_manage_products'] = $view;

  return $export;
}
