<?php
/**
 * @file
 * base_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function base_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create naturalis_page content'.
  $permissions['create naturalis_page content'] = array(
    'name' => 'create naturalis_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any naturalis_page content'.
  $permissions['delete any naturalis_page content'] = array(
    'name' => 'delete any naturalis_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own naturalis_page content'.
  $permissions['delete own naturalis_page content'] = array(
    'name' => 'delete own naturalis_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any naturalis_page content'.
  $permissions['edit any naturalis_page content'] = array(
    'name' => 'edit any naturalis_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own naturalis_page content'.
  $permissions['edit own naturalis_page content'] = array(
    'name' => 'edit own naturalis_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
