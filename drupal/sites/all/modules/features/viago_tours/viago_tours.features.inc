<?php
/**
 * @file
 * viago_tours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function viago_tours_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function viago_tours_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function viago_tours_image_default_styles() {
  $styles = array();

  // Exported image style: cover_tour.
  $styles['cover_tour'] = array(
    'label' => 'Cover_tour',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 350,
          'height' => 235,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: photo_tour.
  $styles['photo_tour'] = array(
    'label' => 'Photo_tour',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 370,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thmb_tour.
  $styles['thmb_tour'] = array(
    'label' => 'thmb_tour',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function viago_tours_node_info() {
  $items = array(
    'tours' => array(
      'name' => t('Rondleidingen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
