<?php
/**
 * @file
 * imagex_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
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
      'name' => t('Frequently Asked Question'),
      'base' => 'node_content',
      'description' => t('Use <em>FAQ</em> to create a frequently asked question and its common response.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
