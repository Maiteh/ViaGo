<?php
/**
 * @file
 * viago_tours.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function viago_tours_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tours-field_tour_body'.
  $field_instances['node-tours-field_tour_body'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_body',
    'label' => 'Beschrijving',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_coverphoto'.
  $field_instances['node-tours-field_tour_coverphoto'] = array(
    'bundle' => 'tours',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_coverphoto',
    'label' => 'Omslagsfoto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 2,
        'croparea' => '350x235',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '350x235',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_duration'.
  $field_instances['node-tours-field_tour_duration'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_duration',
    'label' => 'Duur',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 'h:mm',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_gatherpoint'.
  $field_instances['node-tours-field_tour_gatherpoint'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'simple_gmap',
        'settings' => array(
          'iframe_height' => 200,
          'iframe_width' => 400,
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'information_bubble' => 0,
          'langcode' => 'NL',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_gatherpoint',
    'label' => 'Trefpunt',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_inclusive'.
  $field_instances['node-tours-field_tour_inclusive'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_inclusive',
    'label' => 'Inbegrepen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_languages'.
  $field_instances['node-tours-field_tour_languages'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_languages',
    'label' => 'Talen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_location'.
  $field_instances['node-tours-field_tour_location'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_location',
    'label' => 'Locatie',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_participants_amount'.
  $field_instances['node-tours-field_tour_participants_amount'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'range',
        'settings' => array(
          'combined_prefix_suffix' => 0,
          'decimal_separator' => '.',
          'field_prefix_suffix' => 1,
          'from_prefix_suffix' => 1,
          'range_combine' => 0,
          'range_separator' => '-',
          'scale' => 0,
          'thousand_separator' => ' ',
          'to_prefix_suffix' => 1,
        ),
        'type' => 'range_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_participants_amount',
    'label' => 'Aantal deelnemers',
    'required' => 0,
    'settings' => array(
      'combined' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'field' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'from' => array(
        'label' => 'min',
        'prefix' => '',
        'suffix' => 'pers.',
      ),
      'max' => '',
      'min' => 1,
      'to' => array(
        'label' => 'max',
        'prefix' => '',
        'suffix' => 'pers.',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'range',
      'settings' => array(),
      'type' => 'range',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_photos'.
  $field_instances['node-tours-field_tour_photos'] = array(
    'bundle' => 'tours',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_photos',
    'label' => 'Foto\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_pricecategory'.
  $field_instances['node-tours-field_tour_pricecategory'] = array(
    'bundle' => 'tours',
    'default_value' => array(
      0 => array(
        'value' => 'null',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 8,
          'icon_type' => 'euro',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_pricecategory',
    'label' => 'Prijscategorie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'starrating',
      'settings' => array(),
      'type' => 'starrating_rating_widget',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal deelnemers');
  t('Beschrijving');
  t('Duur');
  t('Foto\'s');
  t('Inbegrepen');
  t('Locatie');
  t('Omslagsfoto');
  t('Prijscategorie');
  t('Talen');
  t('Trefpunt');

  return $field_instances;
}
