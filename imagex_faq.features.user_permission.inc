<?php
/**
 * @file
 * imagex_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: create faq_topic content.
  $permissions['create faq_topic content'] = array(
    'name' => 'create faq_topic content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any faq_topic content.
  $permissions['delete any faq_topic content'] = array(
    'name' => 'delete any faq_topic content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own faq_topic content.
  $permissions['delete own faq_topic content'] = array(
    'name' => 'delete own faq_topic content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any faq_topic content.
  $permissions['edit any faq_topic content'] = array(
    'name' => 'edit any faq_topic content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own faq_topic content.
  $permissions['edit own faq_topic content'] = array(
    'name' => 'edit own faq_topic content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
