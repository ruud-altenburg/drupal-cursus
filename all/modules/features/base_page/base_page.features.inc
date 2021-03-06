<?php
/**
 * @file
 * base_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function base_page_node_info() {
  $items = array(
    'naturalis_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Paginatitel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
