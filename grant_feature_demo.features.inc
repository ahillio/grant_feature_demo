<?php
/**
 * @file
 * grant_feature_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function grant_feature_demo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function grant_feature_demo_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function grant_feature_demo_node_info() {
  $items = array(
    'grant' => array(
      'name' => t('Grant'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
