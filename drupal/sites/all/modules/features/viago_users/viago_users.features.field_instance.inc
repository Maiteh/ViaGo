<?php
/**
 * @file
 * viago_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function viago_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-guide-field_user_guide_address'.
  $field_instances['profile2-guide-field_user_guide_address'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uit welke regio bent u afkomstig',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_address',
    'label' => 'Afkomstig van',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_birthdate'.
  $field_instances['profile2-guide-field_user_guide_birthdate'] = array(
    'bundle' => 'guide',
    'deleted' => 0,
    'description' => 'Geef hier je geboortedatum.',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(),
        'type' => 'date_plain',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'birthdyear',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_birthdate',
    'label' => 'Geboortedatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'custom',
        'input_format_custom' => 'Y m d',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-80:+0',
      ),
      'type' => 'date_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_cv'.
  $field_instances['profile2-guide-field_user_guide_cv'] = array(
    'bundle' => 'guide',
    'deleted' => 0,
    'description' => 'Voeg eventueel uw CV toe als u graag nog extra informatie met ons wilt delen over waarom we u zouden accepteren.',
    'display' => array(
      'account' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_cv',
    'label' => 'Curriculum Vitae',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_degree'.
  $field_instances['profile2-guide-field_user_guide_degree'] = array(
    'bundle' => 'guide',
    'deleted' => 0,
    'description' => 'Heeft u een relevante diploma / getuigenschrift? Dan kan u deze hier uploaden indien u dit wenst.
Bij het beschrijvingsveld kan u een korte beschrijving geven over dit diploma.',
    'display' => array(
      'account' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_degree',
    'label' => 'Diploma',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt jpg pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_description'.
  $field_instances['profile2-guide-field_user_guide_description'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geef hier een beschrijving van kwaliteiten en je kennis.',
    'display' => array(
      'account' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_description',
    'label' => 'Beschrijving',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_experience'.
  $field_instances['profile2-guide-field_user_guide_experience'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_experience',
    'label' => 'Aantal jaar ervaring',
    'required' => 0,
    'settings' => array(
      'max' => 25,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'sliderfield',
      'settings' => array(
        'sliderfield_settings' => array(
          'adjust_field_max' => '',
          'adjust_field_min' => '',
          'animate' => 1,
          'display_bubble' => 1,
          'display_bubble_format' => '%{value}%',
          'display_ignore_button' => 1,
          'display_values' => 1,
          'display_values_format' => '%{value}%',
          'hide_inputs' => 1,
          'hide_slider_handle_when_no_value' => 0,
          'multi_value' => 0,
          'orientation' => 'horizontal',
          'range' => 0,
          'slider_length' => '',
          'slider_style' => 'wild-blue-yonder',
          'step' => 1,
        ),
      ),
      'type' => 'sliderfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_languages'.
  $field_instances['profile2-guide-field_user_guide_languages'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Duid hier aan in welke talen u gidst.',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_languages',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_theme'.
  $field_instances['profile2-guide-field_user_guide_theme'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Kies hier enkele thema\'s die het nauwst aansluiten bij jou interesse.',
    'display' => array(
      'account' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_theme',
    'label' => 'thema\'s',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-guide-field_user_guide_website'.
  $field_instances['profile2-guide-field_user_guide_website'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_guide_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_user_firstname'.
  $field_instances['user-user-field_user_firstname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_firstname',
    'label' => 'Voornaam',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_additional_register_form' => array(
        4 => 4,
        100 => 100,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_user_name'.
  $field_instances['user-user-field_user_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_name',
    'label' => 'Naam',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_additional_register_form' => array(
        4 => 4,
        100 => 100,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_user_phone'.
  $field_instances['user-user-field_user_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_phone',
    'label' => 'GSM',
    'required' => 0,
    'settings' => array(
      'user_additional_register_form' => array(
        4 => 4,
        100 => 100,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal jaar ervaring');
  t('Afkomstig van');
  t('Beschrijving');
  t('Curriculum Vitae');
  t('Diploma');
  t('Duid hier aan in welke talen u gidst.');
  t('GSM');
  t('Geboortedatum');
  t('Geef hier een beschrijving van kwaliteiten en je kennis.');
  t('Geef hier je geboortedatum.');
  t('Heeft u een relevante diploma / getuigenschrift? Dan kan u deze hier uploaden indien u dit wenst.
Bij het beschrijvingsveld kan u een korte beschrijving geven over dit diploma.');
  t('Kies hier enkele thema\'s die het nauwst aansluiten bij jou interesse.');
  t('Naam');
  t('Talen');
  t('Uit welke regio bent u afkomstig');
  t('Voeg eventueel uw CV toe als u graag nog extra informatie met ons wilt delen over waarom we u zouden accepteren.');
  t('Voornaam');
  t('Website');
  t('thema\'s');

  return $field_instances;
}
