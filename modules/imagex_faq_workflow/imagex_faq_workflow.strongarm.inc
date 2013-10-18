<?php
/**
 * @file
 * imagex_faq_workflow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_faq_workflow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_faq_topic';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_faq_topic';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_faq_topic';
  $strongarm->value = 0;
  $export['scheduler_publish_required_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_faq_topic';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_faq_topic';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_faq_topic';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_faq_topic';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_faq_topic';
  $strongarm->value = 'draft';
  $export['scheduler_unpublish_moderation_state_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_faq_topic';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_faq_topic';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_faq_topic';
  $strongarm->value = 1;
  $export['workbench_access_node_type_faq_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_faq_topic';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_faq_topic'] = $strongarm;

  return $export;
}
