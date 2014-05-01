<?php
/**
 * @file
 * document_accessibility_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function document_accessibility_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'accessibility_test_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Document accessibility report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Document accessibility report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create document content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_accessible_status_tid_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_coo_department_tid_i18n' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_accessible_status' => 'field_accessible_status',
    'field_pdf_meta_title' => 'field_pdf_meta_title',
    'filename' => 'filename',
    'field_coo_department' => 'field_coo_department',
    'created_timestamp' => 'created_timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'created_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'field_accessible_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pdf_meta_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filename' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coo_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Export link';
  $handler->display->display_options['header']['area']['content'] = '<form action="/accessibility-test-2/export">
    <input type="submit" value="Download as CSV">
</form>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: File: Accessible */
  $handler->display->display_options['fields']['field_accessible_status']['id'] = 'field_accessible_status';
  $handler->display->display_options['fields']['field_accessible_status']['table'] = 'field_data_field_accessible_status';
  $handler->display->display_options['fields']['field_accessible_status']['field'] = 'field_accessible_status';
  $handler->display->display_options['fields']['field_accessible_status']['label'] = 'Accessibility status';
  $handler->display->display_options['fields']['field_accessible_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_accessible_status']['delta_offset'] = '0';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = 'Title';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: File: Department */
  $handler->display->display_options['fields']['field_coo_department']['id'] = 'field_coo_department';
  $handler->display->display_options['fields']['field_coo_department']['table'] = 'field_data_field_coo_department';
  $handler->display->display_options['fields']['field_coo_department']['field'] = 'field_coo_department';
  $handler->display->display_options['fields']['field_coo_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: File: Created date */
  $handler->display->display_options['fields']['created_timestamp']['id'] = 'created_timestamp';
  $handler->display->display_options['fields']['created_timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['created_timestamp']['field'] = 'created_timestamp';
  $handler->display->display_options['fields']['created_timestamp']['date_format'] = 'short';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['label'] = 'File link';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pdf' => 'pdf',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: File: Accessible (field_accessible_status) (translated) */
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['id'] = 'field_accessible_status_tid_i18n';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['table'] = 'field_data_field_accessible_status';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['field'] = 'field_accessible_status_tid_i18n';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['operator'] = 'and';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['operator_id'] = 'field_accessible_status_tid_i18n_op';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['label'] = 'Accessibility status';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['operator'] = 'field_accessible_status_tid_i18n_op';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['identifier'] = 'field_accessible_status_tid_i18n';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_accessible_status_tid_i18n']['vocabulary'] = 'accessible_documents_status';
  /* Filter criterion: File: Department (field_coo_department) (translated) */
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['id'] = 'field_coo_department_tid_i18n';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['table'] = 'field_data_field_coo_department';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['field'] = 'field_coo_department_tid_i18n';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['operator_id'] = 'field_coo_department_tid_i18n_op';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['operator'] = 'field_coo_department_tid_i18n_op';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['identifier'] = 'field_coo_department_tid_i18n';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_coo_department_tid_i18n']['vocabulary'] = 'city_of_ottawa_departments';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'document-acessibility-report';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Accessibility report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'accessibility-test-2/export';
  $export['accessibility_test_2'] = $view;

  return $export;
}
