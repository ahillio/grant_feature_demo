<?php
/**
 * @file
 * grant_feature_demo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grant_feature_demo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Deadlines';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_amount_available' => 'field_amount_available',
    'field_fundraising_deadline' => 'field_fundraising_deadline',
    'field_grant_status' => 'field_grant_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount_available' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fundraising_deadline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Application Info (field_grant_application_info) */
  $handler->display->display_options['relationships']['field_grant_application_info_value']['id'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['table'] = 'field_data_field_grant_application_info';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['field'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'grant' => 'grant',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'grant_status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grant';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount Available */
  $handler->display->display_options['fields']['field_amount_available']['id'] = 'field_amount_available';
  $handler->display->display_options['fields']['field_amount_available']['table'] = 'field_data_field_amount_available';
  $handler->display->display_options['fields']['field_amount_available']['field'] = 'field_amount_available';
  $handler->display->display_options['fields']['field_amount_available']['relationship'] = 'field_grant_application_info_value';
  /* Field: Field collection item: Due date */
  $handler->display->display_options['fields']['field_fundraising_deadline']['id'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['field'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_fundraising_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_grant_status']['id'] = 'field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['table'] = 'field_data_field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['field'] = 'field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_grant_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
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
    'grant' => 'grant',
  );
  /* Filter criterion: Field collection item: Status (field_grant_status) */
  $handler->display->display_options['filters']['field_grant_status_value']['id'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['table'] = 'field_data_field_grant_status';
  $handler->display->display_options['filters']['field_grant_status_value']['field'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_grant_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['operator_id'] = 'field_grant_status_value_op';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['operator'] = 'field_grant_status_value_op';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['identifier'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator_id'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['identifier'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'grants';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Grants';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Grants Foundation */
  $handler = $view->new_display('block', 'Grants Foundation', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Foundation';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_foundation_target_id']['id'] = 'field_foundation_target_id';
  $handler->display->display_options['relationships']['field_foundation_target_id']['table'] = 'field_data_field_foundation';
  $handler->display->display_options['relationships']['field_foundation_target_id']['field'] = 'field_foundation_target_id';
  $handler->display->display_options['relationships']['field_foundation_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_foundation_target_id';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  /* Field: Organization: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_redhen_org';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'field_foundation_target_id';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<h3><a href="[url]">[label]</a></h3>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Field: Contacts */
  $handler->display->display_options['fields']['field_contact_person']['id'] = 'field_contact_person';
  $handler->display->display_options['fields']['field_contact_person']['table'] = 'field_data_field_contact_person';
  $handler->display->display_options['fields']['field_contact_person']['field'] = 'field_contact_person';
  $handler->display->display_options['fields']['field_contact_person']['relationship'] = 'field_foundation_target_id';
  $handler->display->display_options['fields']['field_contact_person']['label'] = '';
  $handler->display->display_options['fields']['field_contact_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_person']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_contact_person']['delta_offset'] = '0';
  /* Field: Organization: Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['relationship'] = 'field_foundation_target_id';
  /* Field: Organization: Phone */
  $handler->display->display_options['fields']['field_organization_phone']['id'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['table'] = 'field_data_field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['field'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['relationship'] = 'field_foundation_target_id';
  $handler->display->display_options['fields']['field_organization_phone']['label'] = '';
  $handler->display->display_options['fields']['field_organization_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_phone']['delta_offset'] = '0';
  /* Field: Organization: Website */
  $handler->display->display_options['fields']['field_organization_website']['id'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['table'] = 'field_data_field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['field'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['relationship'] = 'field_foundation_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'grant' => 'grant',
  );

  /* Display: Upcoming Deadlines */
  $handler = $view->new_display('block', 'Upcoming Deadlines', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Deadlines';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grant';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Due date */
  $handler->display->display_options['fields']['field_fundraising_deadline']['id'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['field'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_fundraising_deadline']['label'] = 'Due Date';
  $handler->display->display_options['fields']['field_fundraising_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
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
    'grant' => 'grant',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'grant_status';
  /* Filter criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['default_date'] = 'now';

  /* Display: Others for Program */
  $handler = $view->new_display('block', 'Others for Program', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Grants';
  $handler->display->display_options['display_description'] = 'Grants that may be used for the same program as this grant.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grant';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Due date */
  $handler->display->display_options['fields']['field_fundraising_deadline']['id'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['field'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_fundraising_deadline']['label'] = 'Due Date';
  $handler->display->display_options['fields']['field_fundraising_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'grant' => 'grant',
  );
  /* Filter criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['default_date'] = 'now';
  $export['grants'] = $view;

  return $export;
}
