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

  // Exported field_instance: 'file-image-field_file_image_alt_text'.
  $field_instances['file-image-field_file_image_alt_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_alt_text',
    'label' => 'Alt Text',
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_title_text'.
  $field_instances['file-image-field_file_image_title_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_title_text',
    'label' => 'Title Text',
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_body'.
  $field_instances['node-tours-field_tour_body'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_body',
    'label' => 'Omschrijving rondleiding',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_coverphoto'.
  $field_instances['node-tours-field_tour_coverphoto'] = array(
    'bundle' => 'tours',
    'deleted' => 0,
    'description' => 'Upload hier een foto als omslag foto. Deze foto wordt "Enkel" getoond bij het overzicht van alle rondleidingen.
Bij het uploaden krijgt u de mogelijkheid om deze bij te snijden in de juiste verhoudingen.
Deze wordt automatisch opgeslagen  bij het opslaan van uw rondleiding.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'cover_tour',
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
      'default_image' => 111,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '350x235',
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
        'preview_image_style' => 'cover_tour',
        'progress_indicator' => 'throbber',
        'resolution' => '350x235',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 11,
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
        'label' => 'hidden',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
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
        'weight' => 9,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_gatherpoint'.
  $field_instances['node-tours-field_tour_gatherpoint'] = array(
    'bundle' => 'tours',
    'default_value' => array(
      0 => array(
        'value' => 'Grote Markt, Brussel',
      ),
    ),
    'deleted' => 0,
    'description' => 'Geef hier het adres op waar u afspreekt.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
      'full' => array(
        'label' => 'hidden',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_gatherpoint',
    'label' => 'Trefpunt (Adres)',
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
      'weight' => 3,
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_inclusive',
    'label' => 'Inbegrepen in prijs',
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
      'weight' => 10,
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
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
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
      'weight' => 8,
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
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_location',
    'label' => 'Locatie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_participants_amount'.
  $field_instances['node-tours-field_tour_participants_amount'] = array(
    'bundle' => 'tours',
    'default_value' => array(
      0 => array(
        'from' => 1,
        'to' => 30,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
      'full' => array(
        'label' => 'hidden',
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
        'weight' => 10,
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
        'suffix' => '',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_photos'.
  $field_instances['node-tours-field_tour_photos'] = array(
    'bundle' => 'tours',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => '',
          'custom_parent_classes' => '',
          'image_style' => 'photo_tour',
          'incompatible_file_action' => 'show_icon_and_link',
          'jlib_backgroundColor' => '#222222',
          'jlib_galleryHeight' => '100%',
          'jlib_galleryWidth' => '100%',
          'jlib_showExpandButton' => 1,
          'jlib_showOpenButton' => 1,
          'jlib_showThumbsButton' => 1,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 0,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'thumb_style' => 'thmb_tour',
          'title_source' => '',
        ),
        'type' => 'juicebox_formatter',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => '',
          'custom_parent_classes' => '',
          'image_style' => 'photo_tour',
          'incompatible_file_action' => 'show_icon_and_link',
          'jlib_backgroundColor' => '#222222',
          'jlib_galleryHeight' => '100%',
          'jlib_galleryWidth' => '100%',
          'jlib_showExpandButton' => 1,
          'jlib_showOpenButton' => 1,
          'jlib_showThumbsButton' => 1,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 0,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'thumb_style' => 'thmb_tour',
          'title_source' => '',
        ),
        'type' => 'juicebox_formatter',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_photos',
    'label' => 'Foto\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 109,
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
      'weight' => 12,
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
    'description' => 'Prijs per uur
1 -> €1-€40
2 -> €41-€60
3 -> €61-€80
4 -> €81-€100
5 -> +€100


',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 8,
          'icon_type' => 'euro',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
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
        'label' => 'hidden',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 8,
          'icon_type' => 'euro',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-tours-field_tour_theme'.
  $field_instances['node-tours-field_tour_theme'] = array(
    'bundle' => 'tours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_theme',
    'label' => 'Thema',
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal deelnemers');
  t('Alt Text');
  t('Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.');
  t('Duur');
  t('Foto\'s');
  t('Geef hier het adres op waar u afspreekt.');
  t('Inbegrepen in prijs');
  t('Locatie');
  t('Omschrijving rondleiding');
  t('Omslagsfoto');
  t('Prijs per uur
1 -> €1-€40
2 -> €41-€60
3 -> €61-€80
4 -> €81-€100
5 -> +€100


');
  t('Prijscategorie');
  t('Talen');
  t('Thema');
  t('Title Text');
  t('Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.');
  t('Trefpunt (Adres)');
  t('Upload hier een foto als omslag foto. Deze foto wordt "Enkel" getoond bij het overzicht van alle rondleidingen.
Bij het uploaden krijgt u de mogelijkheid om deze bij te snijden in de juiste verhoudingen.
Deze wordt automatisch opgeslagen  bij het opslaan van uw rondleiding.');

  return $field_instances;
}
