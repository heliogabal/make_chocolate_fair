<?php
/**
 * @file
 * inkota_petition.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function inkota_petition_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_petition_foto' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|webform|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function inkota_petition_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_petition_foto',
        1 => 'field_petition_info',
      ),
      'left' => array(
        2 => 'field_progress',
        3 => 'body',
      ),
      'right' => array(
        4 => 'webform',
      ),
    ),
    'fields' => array(
      'field_petition_foto' => 'header',
      'field_petition_info' => 'header',
      'field_progress' => 'left',
      'body' => 'left',
      'webform' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'article',
      'right' => 'aside',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => 'role="main"',
    'layout_attributes_merge' => 1,
  );
  $export['node|webform|default'] = $ds_layout;

  return $export;
}
