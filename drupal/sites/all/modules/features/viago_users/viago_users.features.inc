<?php
/**
 * @file
 * viago_users.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function viago_users_image_default_styles() {
  $styles = array();

  // Exported image style: profile_photo.
  $styles['profile_photo'] = array(
    'label' => 'profile photo',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
      7 => NULL,
      8 => NULL,
      9 => NULL,
    ),
  );

  return $styles;
}

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
    "data" : { "registration" : 0 }
  }');
  $items['toerist'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "toerist",
    "label" : "Toerist",
    "weight" : "0",
    "data" : { "registration" : 1 }
  }');
  return $items;
}
