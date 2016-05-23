<?php
/**
 * @file
 * viago_users.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function viago_users_default_profile2_type() {
  $items = array();
  $items['guide'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "guide",
    "label" : "Gids",
    "weight" : "0",
    "data" : { "registration" : false, "step_step" : "register_guide" }
  }');
  return $items;
}
