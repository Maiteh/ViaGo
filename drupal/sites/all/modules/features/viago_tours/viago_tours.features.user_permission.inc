<?php
/**
 * @file
 * viago_tours.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function viago_tours_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rate',
  );

  return $permissions;
}
