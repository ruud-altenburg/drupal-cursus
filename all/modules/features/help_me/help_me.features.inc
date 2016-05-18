<?php
/**
 * @file
 * help_me.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function help_me_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function help_me_node_info() {
  $items = array(
    'naturalis_help' => array(
      'name' => t('Naturalis Help Page'),
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
