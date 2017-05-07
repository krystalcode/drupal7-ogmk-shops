<?php
/**
 * @file
 * ogmk_shops.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_shops_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col1|node|ogmk_shop|form';
  $field_group->group_name = 'group_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_shop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '8',
    'children' => array(
      0 => 'ogmk_text',
      1 => 'title_field',
      2 => 'ogmk_text_with_summary',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_col1|node|ogmk_shop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col2|node|ogmk_shop|form';
  $field_group->group_name = 'group_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_shop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row2';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '2',
    'children' => array(
      0 => 'ogmk_image',
      1 => 'ogmk_atoms_ref',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 2',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col2 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_col2|node|ogmk_shop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1|node|ogmk_shop|form';
  $field_group->group_name = 'group_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_shop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'group_col1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row1 field-group-bootstrap_grid_row',
        'description' => 'Enter the title, a tagline and the description of the shop as they will show to the visitors.',
      ),
    ),
  );
  $field_groups['group_row1|node|ogmk_shop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row2|node|ogmk_shop|form';
  $field_group->group_name = 'group_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_shop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '1',
    'children' => array(
      0 => 'group_col2',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row2 field-group-bootstrap_grid_row',
        'description' => 'Add a cover image that will be used to represent the shop in shop listings, and any other related resources such as videos.',
      ),
    ),
  );
  $field_groups['group_row2|node|ogmk_shop|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column 1');
  t('Column 2');
  t('Details');
  t('Resources');

  return $field_groups;
}
