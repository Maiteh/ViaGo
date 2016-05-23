<?php
/**
 * @file
 * viago_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function viago_users_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 7,
  );

  // Exported role: Gids.
  $roles['Gids'] = array(
    'name' => 'Gids',
    'weight' => 3,
  );

  // Exported role: Toerist.
  $roles['Toerist'] = array(
    'name' => 'Toerist',
    'weight' => 6,
  );

  return $roles;
}
