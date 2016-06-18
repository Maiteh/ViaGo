<?php
/**
 * @file
 * viago_tours.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function viago_tours_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_api_admin_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_api_admin_thumbnail',
  );
  $export['image__node_gallery_api_admin_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_cover__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_thumbnail',
  );
  $export['image__node_gallery_file_cover__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_display__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_display',
  );
  $export['image__node_gallery_file_display__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__node_gallery_file_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'node_gallery_thumbnail',
  );
  $export['image__node_gallery_file_thumbnail__file_image'] = $file_display;

  return $export;
}
