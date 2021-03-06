<?php
/**
 * @file
 * viago_tours.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viago_tours_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_tour';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rondleidingen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mijn rondleidingen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'pas toe';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteer op ';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Goedkoopste eerst';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Duurste eerst';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_tour_languages_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_tour_pricecategory_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '1',
        'bef_slider_max' => '4',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_tour_location_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'plain_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Contextual filter: Content: Prijscategorie (field_tour_pricecategory) */
  $handler->display->display_options['arguments']['field_tour_pricecategory_value']['id'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['arguments']['field_tour_pricecategory_value']['table'] = 'field_data_field_tour_pricecategory';
  $handler->display->display_options['arguments']['field_tour_pricecategory_value']['field'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['arguments']['field_tour_pricecategory_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tour_pricecategory_value']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tours' => 'tours',
  );

  /* Display: all tours */
  $handler = $view->new_display('page', 'all tours', 'view_tours_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['caption'] = 'Prijscategorie = prijs per uur 1 < €40 || 2 €40 < €60 || 3 €60 < €80 || 4 €80 < €100 || 5 > €100';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Sort criterion: Content: Prijscategorie (field_tour_pricecategory) */
  $handler->display->display_options['sorts']['field_tour_pricecategory_value']['id'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['sorts']['field_tour_pricecategory_value']['table'] = 'field_data_field_tour_pricecategory';
  $handler->display->display_options['sorts']['field_tour_pricecategory_value']['field'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['sorts']['field_tour_pricecategory_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tour_pricecategory_value']['expose']['label'] = 'Prijs ';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tours' => 'tours',
  );
  /* Filter criterion: Content: Talen (field_tour_languages) */
  $handler->display->display_options['filters']['field_tour_languages_value']['id'] = 'field_tour_languages_value';
  $handler->display->display_options['filters']['field_tour_languages_value']['table'] = 'field_data_field_tour_languages';
  $handler->display->display_options['filters']['field_tour_languages_value']['field'] = 'field_tour_languages_value';
  $handler->display->display_options['filters']['field_tour_languages_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['operator_id'] = 'field_tour_languages_value_op';
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['label'] = 'Talen';
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['operator'] = 'field_tour_languages_value_op';
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['identifier'] = 'tour_language';
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tour_languages_value']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_tour_languages_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Prijscategorie (field_tour_pricecategory) */
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['id'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['table'] = 'field_data_field_tour_pricecategory';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['field'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['expose']['operator_id'] = 'field_tour_pricecategory_value_op';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['expose']['label'] = 'Prijscatergorie per uur';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['expose']['operator'] = 'field_tour_pricecategory_value_op';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['expose']['identifier'] = 'field_tour_pricecategory_value';
  $handler->display->display_options['filters']['field_tour_pricecategory_value']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Locatie (field_tour_location) */
  $handler->display->display_options['filters']['field_tour_location_tid']['id'] = 'field_tour_location_tid';
  $handler->display->display_options['filters']['field_tour_location_tid']['table'] = 'field_data_field_tour_location';
  $handler->display->display_options['filters']['field_tour_location_tid']['field'] = 'field_tour_location_tid';
  $handler->display->display_options['filters']['field_tour_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tour_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tour_location_tid']['expose']['operator_id'] = 'field_tour_location_tid_op';
  $handler->display->display_options['filters']['field_tour_location_tid']['expose']['label'] = 'Locatie';
  $handler->display->display_options['filters']['field_tour_location_tid']['expose']['operator'] = 'field_tour_location_tid_op';
  $handler->display->display_options['filters']['field_tour_location_tid']['expose']['identifier'] = 'field_tour_location_tid';
  $handler->display->display_options['filters']['field_tour_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_tour_location_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tour_location_tid']['vocabulary'] = 'location';
  $handler->display->display_options['path'] = 'rondleidingen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Alle rondleidingen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: newest tours */
  $handler = $view->new_display('block', 'newest tours', 'view_tour_block_newest');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'view_block_tours_newest';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['block_description'] = 'view_tours_block_newest';

  /* Display: popular tours */
  $handler = $view->new_display('block', 'popular tours', 'view_tour_block_popular');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Rate',
    'function' => 'average',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Sort criterion: Vote results: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'view_tours_block_popular';

  /* Display: my tours */
  $handler = $view->new_display('page', 'my tours', 'view_my_tours');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Gids';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tours' => 'tours',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['path'] = 'mijnrondleidingen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mijn rondleidingen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-gidssub';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['view_tour'] = array(
    t('Master'),
    t('Mijn rondleidingen'),
    t('more'),
    t('pas toe'),
    t('Toon alles'),
    t('Sorteer op '),
    t('Goedkoopste eerst'),
    t('Duurste eerst'),
    t('Advanced options'),
    t('Sort options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('all tours'),
    t('Prijs '),
    t('Talen'),
    t('Prijscatergorie per uur'),
    t('Locatie'),
    t('newest tours'),
    t('view_block_tours_newest'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('view_tours_block_newest'),
    t('popular tours'),
    t('Vote results'),
    t('view_tours_block_popular'),
    t('my tours'),
    t('Gids'),
  );
  $export['view_tour'] = $view;

  return $export;
}
