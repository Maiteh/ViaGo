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

  // Exported role: guide.
  $roles['guide'] = array(
    'name' => 'guide',
    'weight' => 3,
  );

  // Exported role: tourist.
  $roles['tourist'] = array(
    'name' => 'tourist',
    'weight' => 6,
  );

  return $roles;
}
