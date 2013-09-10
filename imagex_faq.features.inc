<?php
/**
 * @file
 * imagex_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imagex_faq_node_info() {
  $items = array(
    'faq_topic' => array(
      'name' => t('FAQ Topic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
