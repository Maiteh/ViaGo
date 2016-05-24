<?php
/**
 * @file
 * viago_tours.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function viago_tours_taxonomy_default_vocabularies() {
  return array(
    'location' => array(
      'name' => 'Location',
      'machine_name' => 'location',
      'description' => 'location of a tour',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
