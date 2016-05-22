<?php
/**
 * @file
 * viago_tours.features.inc
 */

/**
 * Implements hook_views_api().
 */
function viago_tours_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
