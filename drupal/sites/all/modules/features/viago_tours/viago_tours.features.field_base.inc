<?php
/**
 * @file
 * viago_tours.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function viago_tours_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tour_body'.
  $field_bases['field_tour_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_tour_coverphoto'.
  $field_bases['field_tour_coverphoto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_coverphoto',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_tour_duration'.
  $field_bases['field_tour_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_duration',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'hms_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'hms_field',
  );

  // Exported field_base: 'field_tour_gatherpoint'.
  $field_bases['field_tour_gatherpoint'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_gatherpoint',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_tour_inclusive'.
  $field_bases['field_tour_inclusive'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_inclusive',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_tour_languages'.
  $field_bases['field_tour_languages'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_languages',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'NL' => 'NL',
        'FR' => 'FR',
        'EN' => 'EN',
        'DE' => 'DE',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_tour_location'.
  $field_bases['field_tour_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_location',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Ardennen (Henegouwen, Luik, Luxemburg, Namen, Frankrijk en Ghd. Luxemburg)' => 'Ardennen (Henegouwen, Luik, Luxemburg, Namen, Frankrijk en Ghd. Luxemburg)',
        'Bachten de Kupe (West-Vlaanderen)' => 'Bachten de Kupe (West-Vlaanderen)',
        'Belgisch-Lotharingen (Luxemburg)' => 'Belgisch-Lotharingen (Luxemburg)',
        'Belgische Eifel (Luik)' => 'Belgische Eifel (Luik)',
        'Belgische Kust (West-Vlaanderen)' => 'Belgische Kust (West-Vlaanderen)',
        'Belgische Middenkust (West-Vlaanderen)' => 'Belgische Middenkust (West-Vlaanderen)',
        'Belgische Oostkust (West-Vlaanderen)' => 'Belgische Oostkust (West-Vlaanderen)',
        'Belgische Westkust (West-Vlaanderen)' => 'Belgische Westkust (West-Vlaanderen)',
        'Borinage (Henegouwen)' => 'Borinage (Henegouwen)',
        'Brabantse Ardennen (Vlaams-Brabant, Waals-Brabant)' => 'Brabantse Ardennen (Vlaams-Brabant, Waals-Brabant)',
        'Brabantse Kouters (Vlaams-Brabant)' => 'Brabantse Kouters (Vlaams-Brabant)',
        'Brusselse Rand (Vlaams-Brabant)' => 'Brusselse Rand (Vlaams-Brabant)',
        'Caléstienne (Henegouwen, Luik, Luxemburg, Namen en Frankrijk)' => 'Caléstienne (Henegouwen, Luik, Luxemburg, Namen en Frankrijk)',
        'Condroz (Henegouwen, Luik, Luxemburg en Namen)' => 'Condroz (Henegouwen, Luik, Luxemburg en Namen)',
        'Condruzische Ardennen (Luik en Namen)' => 'Condruzische Ardennen (Luik en Namen)',
        'Denderstreek (Oost-Vlaanderen)' => 'Denderstreek (Oost-Vlaanderen)',
        'Dijleland (Vlaams-Brabant)' => 'Dijleland (Vlaams-Brabant)',
        'Druivenstreek (Vlaams-Brabant)' => 'Druivenstreek (Vlaams-Brabant)',
        'Fagne (Henegouwen, Namen en Frankrijk)' => 'Fagne (Henegouwen, Namen en Frankrijk)',
        'Famenne (Luxemburg en Namen)' => 'Famenne (Luxemburg en Namen)',
        'Gaume (Luxemburg)' => 'Gaume (Luxemburg)',
        'Groene Gordel (Vlaams-Brabant)' => 'Groene Gordel (Vlaams-Brabant)',
        'Hageland (Vlaams-Brabant)' => 'Hageland (Vlaams-Brabant)',
        'Haspengouw (Limburg, Luik, Vlaams-Brabant en Waals-Brabant)' => 'Haspengouw (Limburg, Luik, Vlaams-Brabant en Waals-Brabant)',
        'Hoge Ardennen (Luik, Luxemburg en Ghd. Luxemburg)' => 'Hoge Ardennen (Luik, Luxemburg en Ghd. Luxemburg)',
        'Hoge Venen (Luik en Duitsland)' => 'Hoge Venen (Luik en Duitsland)',
        'Houtland (West-Vlaanderen)' => 'Houtland (West-Vlaanderen)',
        'Kempen (Antwerpen, Limburg, Vlaams-Brabant en Nederland)' => 'Kempen (Antwerpen, Limburg, Vlaams-Brabant en Nederland)',
        'Kempens Bekken (Limburg)' => 'Kempens Bekken (Limburg)',
        'Kempens Plateau (Limburg)' => 'Kempens Plateau (Limburg)',
        'Klein-Brabant (Antwerpen)' => 'Klein-Brabant (Antwerpen)',
        'Lage Ardennen (Henegouwen, Luxemburg, Namen en Frankrijk)' => 'Lage Ardennen (Henegouwen, Luxemburg, Namen en Frankrijk)',
        'Land van Aalst (Oost-Vlaanderen)' => 'Land van Aalst (Oost-Vlaanderen)',
        'Land van Aarlen (Luxemburg)' => 'Land van Aarlen (Luxemburg)',
        'Land van Eupen (Luik)' => 'Land van Eupen (Luik)',
        'Land van Herve (Luik)' => 'Land van Herve (Luik)',
        'Leiedal (Henegouwen, West-Vlaanderen en Frankrijk)' => 'Leiedal (Henegouwen, West-Vlaanderen en Frankrijk)',
        'Leiestreek (Oost-Vlaanderen en West-Vlaanderen)' => 'Leiestreek (Oost-Vlaanderen en West-Vlaanderen)',
        'Maasland (Limburg en Nederland)' => 'Maasland (Limburg en Nederland)',
        'Maritiem Vlaanderen (West-Vlaanderen)' => 'Maritiem Vlaanderen (West-Vlaanderen)',
        'Marlagne (Henegouwen, Luik en Namen)' => 'Marlagne (Henegouwen, Luik en Namen)',
        'Meetjesland (Oost-Vlaanderen)' => 'Meetjesland (Oost-Vlaanderen)',
        'Midden-West-Vlaamse Heuvelrug (West-Vlaanderen)' => 'Midden-West-Vlaamse Heuvelrug (West-Vlaanderen)',
        'Oostelijke Mijnstreek (Limburg)' => 'Oostelijke Mijnstreek (Limburg)',
        'Oostkantons (Luik)' => 'Oostkantons (Luik)',
        'Rivierenland (Antwerpen)' => 'Rivierenland (Antwerpen)',
        'Rupelstreek (Antwerpen)' => 'Rupelstreek (Antwerpen)',
        'Scheldeland (Antwerpen en Oost-Vlaanderen)' => 'Scheldeland (Antwerpen en Oost-Vlaanderen)',
        'Thiérache (Henegouwen, Namen en Frankrijk)' => 'Thiérache (Henegouwen, Namen en Frankrijk)',
        'Thudinië (Henegouwen)' => 'Thudinië (Henegouwen)',
        'Veurne-Ambacht (West-Vlaanderen)' => 'Veurne-Ambacht (West-Vlaanderen)',
        'Vijvergebied Midden-Limburg (Limburg)' => 'Vijvergebied Midden-Limburg (Limburg)',
        'Vlaamse Ardennen (Oost-Vlaanderen)' => 'Vlaamse Ardennen (Oost-Vlaanderen)',
        'Vlaamse Rand (Vlaams-Brabant)' => 'Vlaamse Rand (Vlaams-Brabant)',
        'Vlaamse Ruit (Antwerpen, Oost-Vlaanderen van Vlaams-Brabant)' => 'Vlaamse Ruit (Antwerpen, Oost-Vlaanderen van Vlaams-Brabant)',
        'Voerstreek (Limburg)' => 'Voerstreek (Limburg)',
        'Voorkempen (Antwerpen)' => 'Voorkempen (Antwerpen)',
        'Waasland (Antwerpen en Oost-Vlaanderen)' => 'Waasland (Antwerpen en Oost-Vlaanderen)',
        'West-Vlaams Heuvelland (West-Vlaanderen)' => 'West-Vlaams Heuvelland (West-Vlaanderen)',
        'Westhoek (West-Vlaanderen en Frankrijk)' => 'Westhoek (West-Vlaanderen en Frankrijk)',
        'Westland (West-Vlaanderen)' => 'Westland (West-Vlaanderen)',
        'Zennevallei (Vlaams-Brabant)' => 'Zennevallei (Vlaams-Brabant)',
        'Zuid-Limburg (Limburg)' => 'Zuid-Limburg (Limburg)',
        'Zandig Vlaanderen' => 'Zandig Vlaanderen',
        'Zandlemig Vlaanderen' => 'Zandlemig Vlaanderen',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_tour_participants_amount'.
  $field_bases['field_tour_participants_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_participants_amount',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'range',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'range_integer',
  );

  // Exported field_base: 'field_tour_photos'.
  $field_bases['field_tour_photos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_photos',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_tour_pricecategory'.
  $field_bases['field_tour_pricecategory'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_pricecategory',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 5,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  // Exported field_base: 'field_tour_theme'.
  $field_bases['field_tour_theme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tour_theme',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
