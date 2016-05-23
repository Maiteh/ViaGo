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
      7 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#fff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
      8 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 150,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => 3,
      ),
      9 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 100,
        ),
        'weight' => 4,
      ),
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
    "data" : { "registration" : false }
  }');
  return $items;
}
