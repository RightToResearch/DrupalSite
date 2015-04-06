<?php

function opencon_views_views_default_views()
{
    $views = array();
    $view = new view();
    $view->name = 'blog';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Blog';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Blog';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '3';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '9';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'node';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Sort criterion: Content: Sticky */
    $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
    $handler->display->display_options['sorts']['sticky']['table'] = 'node';
    $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
    $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
        'blog' => 'blog'
    );
    
    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'blog';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Blog';
    $handler->display->display_options['menu']['name'] = 'main-menu';
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block_1');
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['record-columns'] = '4';
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'node';
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $translatables['blog'] = array(
        t('Master'),
        t('Blog'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Items per page'),
        t('- All -'),
        t('Offset'),
        t('« first'),
        t('‹ previous'),
        t('next ›'),
        t('last »'),
        t('Page'),
        t('Block')
    );
    $views[] = $view;
    $view = new view();
    $view->name = 'content_sldier';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Content slider';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Content slider';
    $handler->display->display_options['css_class'] = 'cycle-sentinel';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'views_cycle2';
    $handler->display->display_options['style_options']['swipe'] = 1;
    $handler->display->display_options['style_options']['timeout'] = '8000';
    $handler->display->display_options['style_options']['show_pager'] = 1;
    $handler->display->display_options['style_options']['allow-wrap'] = 1;
    $handler->display->display_options['style_options']['auto-height'] = 'calc';
    $handler->display->display_options['row_plugin'] = 'node';
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
        'content_slide' => 'content_slide'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'content_slider');
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Content: Post date */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $translatables['content_sldier'] = array(
        t('Master'),
        t('Content slider'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Block')
    );
    $views[] = $view;
    $view = new view();
    $view->name = 'features';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Features';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Features';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '6';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['record-columns'] = '4';
    $handler->display->display_options['row_plugin'] = 'node';
    $handler->display->display_options['row_options']['links'] = FALSE;
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
        'features' => 'features'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $handler->display->display_options['defaults']['header'] = FALSE;
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
        'features' => 'features'
    );
    /* Filter criterion: Content: Nid */
    $handler->display->display_options['filters']['nid']['id'] = 'nid';
    $handler->display->display_options['filters']['nid']['table'] = 'node';
    $handler->display->display_options['filters']['nid']['field'] = 'nid';
    $handler->display->display_options['filters']['nid']['operator'] = '!=';
    $handler->display->display_options['filters']['nid']['value']['value'] = '53';
    $handler->display->display_options['block_description'] = 'Features';
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block_1');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['record-columns'] = '12';
    $handler->display->display_options['style_options']['row-records'] = '1';
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'node';
    $handler->display->display_options['row_options']['links'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
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
        'features' => 'features'
    );
    /* Filter criterion: Content: Nid */
    $handler->display->display_options['filters']['nid']['id'] = 'nid';
    $handler->display->display_options['filters']['nid']['table'] = 'node';
    $handler->display->display_options['filters']['nid']['field'] = 'nid';
    $handler->display->display_options['filters']['nid']['value']['value'] = '53';
    $handler->display->display_options['block_description'] = 'About';
    $translatables['features'] = array(
        t('Master'),
        t('Features'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Block'),
        t('About')
    );
    
    $views[] = $view;
    $view = new view();
    $view->name = 'testimonials';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Testimonials';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'What the community is saying about OpenCon';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'views_cycle2';
    $handler->display->display_options['style_options']['fx'] = 'scrollHorz';
    $handler->display->display_options['style_options']['swipe'] = 1;
    $handler->display->display_options['style_options']['timeout'] = '12000';
    $handler->display->display_options['style_options']['show_pager'] = 0;
    $handler->display->display_options['style_options']['allow-wrap'] = 1;
    $handler->display->display_options['style_options']['auto-height'] = 'calc';
    $handler->display->display_options['row_plugin'] = 'node';
    $handler->display->display_options['row_options']['view_mode'] = 'full';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    /* Field: Field: Image */
    $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
    $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
    $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
    $handler->display->display_options['fields']['field_image']['label'] = '';
    $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_image']['settings'] = array(
        'image_style' => '',
        'image_link' => ''
    );
    /* Field: Content: Signature */
    $handler->display->display_options['fields']['field_signature']['id'] = 'field_signature';
    $handler->display->display_options['fields']['field_signature']['table'] = 'field_data_field_signature';
    $handler->display->display_options['fields']['field_signature']['field'] = 'field_signature';
    $handler->display->display_options['fields']['field_signature']['label'] = '';
    $handler->display->display_options['fields']['field_signature']['element_label_colon'] = FALSE;
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
        'testimonials' => 'testimonials'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'testimonials');
    $handler->display->display_options['block_description'] = 'Testimonials';
    $translatables['testimonials'] = array(
        t('Master'),
        t('What the community is saying about OpenCon'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Body'),
        t('Block'),
        t('Testimonials')
    );
    
    $views[] = $view;
    $view = new view();
    $view->name = 'sponsors';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Sponsors';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'OpenCon 2014 is made possible by the generous support of our sponsors:';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['row-records'] = '4';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Footer: Global: Text area */
    $handler->display->display_options['footer']['area']['id'] = 'area';
    $handler->display->display_options['footer']['area']['table'] = 'views';
    $handler->display->display_options['footer']['area']['field'] = 'area';
    $handler->display->display_options['footer']['area']['content'] = '<p align="center"><a href="http://opencon2014.org/sponsorship">Learn more about sponsoring OpenCon 2014</a></p>';
    $handler->display->display_options['footer']['area']['format'] = 'full_html';
    /* Field: Content: Link */
    $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
    $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
    $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
    $handler->display->display_options['fields']['field_link']['label'] = '';
    $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
    $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
    /* Field: Field: Image */
    $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
    $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
    $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
    $handler->display->display_options['fields']['field_image']['label'] = '';
    $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['field_image']['alter']['text'] = '<p align="center">[field_image]</p>';
    $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
    $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_image']['settings'] = array(
        'image_style' => '',
        'image_link' => ''
    );
    /* Sort criterion: Content: Weight (field_weight) */
    $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
    $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
    $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
        'sponsors' => 'sponsors'
    );
    
    /* Display: Sponsors */
    $handler = $view->new_display('block', 'Sponsors', 'sponsors');
    $handler->display->display_options['block_description'] = 'Sponsors';
    $translatables['sponsors'] = array(
        t('Master'),
        t('OpenCon 2014 is made possible by the generous support of our sponsors:'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('<p align="center"><a href="http://opencon2014.org/sponsorship">Learn more about sponsoring OpenCon 2014</a></p>'),
        t('<p align="center">[field_image]</p>'),
        t('Sponsors')
    );
    
    $views[] = $view;
    $view = new view();
    $view->name = 'slider';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Slider';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Slider';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    /* Field: Broken/missing handler */
    $handler->display->display_options['fields']['field_background']['id'] = 'field_background';
    $handler->display->display_options['fields']['field_background']['table'] = 'field_data_field_background';
    $handler->display->display_options['fields']['field_background']['field'] = 'field_background';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['text'] = '<h1>[title]</h1>';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
    /* Field: Revolution Component: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = '';
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_date']['type'] = 'countdown';
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'width' => 'row',
        'column_wrapper' => 'span3'
    );
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
        'slide' => 'slide'
    );
    
    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'slider';
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'slider');
    $handler->display->display_options['block_description'] = 'Slider';
    $translatables['slider'] = array(
        t('Master'),
        t('Slider'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Items per page'),
        t('- All -'),
        t('Offset'),
        t('« first'),
        t('‹ previous'),
        t('next ›'),
        t('last »'),
        t('Broken handler field_data_field_background.field_background'),
        t('<h1>[title]</h1>'),
        t('Page'),
        t('Block')
    );
    $views[] = $view;
    $view = new view();
    $view->name = 'session';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Sessions';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Sessions';
    $handler->display->display_options['css_class'] = 'speakers-wrapper';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '3';
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['row_class'] = 'speaker';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['record-columns'] = '12';
    $handler->display->display_options['style_options']['row-records'] = '1';
    $handler->display->display_options['row_plugin'] = 'node';
    $handler->display->display_options['row_options']['view_mode'] = 'full';
    $handler->display->display_options['row_options']['links'] = FALSE;
    /* Relationship: Content: Taxonomy terms on node */
    $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
        'place' => 'place',
        'newsletter' => 0,
        'tags' => 0
    );
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
    /* Contextual filter: Taxonomy term: Name */
    $handler->display->display_options['arguments']['name']['id'] = 'name';
    $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['arguments']['name']['field'] = 'name';
    $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
    $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['name']['limit'] = '0';
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
        'session' => 'session'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $translatables['session'] = array(
        t('Master'),
        t('Sessions'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('term'),
        t('All'),
        t('Block')
    );
    
    $views[] = $view;
    $view = new view();
    $view->name = 'what_does_it_look_like_here_';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Gallery';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Gallery';
    $handler->display->display_options['css_class'] = 'gallery';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '5';
    $handler->display->display_options['style_plugin'] = 'realia_grid';
    $handler->display->display_options['style_options']['row_class'] = 'thumbnail';
    $handler->display->display_options['style_options']['view-columns'] = '12';
    $handler->display->display_options['style_options']['row-records'] = '4';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Content: Gallery */
    $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
    $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
    $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
    $handler->display->display_options['fields']['field_gallery']['label'] = '';
    $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_gallery']['type'] = 'colorbox';
    $handler->display->display_options['fields']['field_gallery']['settings'] = array(
        'colorbox_node_style' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => ''
    );
    $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
    /* Field: Content: Place */
    $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
    $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
    $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
    $handler->display->display_options['fields']['field_place']['label'] = '';
    $handler->display->display_options['fields']['field_place']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_place']['type'] = 'taxonomy_term_reference_plain';
    $handler->display->display_options['fields']['field_place']['delta_offset'] = '0';
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
        'gallery' => 'gallery'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'gallery');
    $handler->display->display_options['block_description'] = 'Gallery';
    $translatables['what_does_it_look_like_here_'] = array(
        t('Master'),
        t('Gallery'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Block')
    );
    
    $views[] = $view;
    
    $view = new view();
    $view->name = 'sponsorshiptype_main';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'SponsorshipType Main';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '3';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'fluid_grid';
    $handler->display->display_options['style_options']['items_width'] = '179';
    $handler->display->display_options['style_options']['items_height'] = '179';
    $handler->display->display_options['style_options']['box_shadow'] = '0';
    $handler->display->display_options['style_options']['border_radius'] = '0';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Content: Icon */
    $handler->display->display_options['fields']['field_real_icon']['id'] = 'field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['table'] = 'field_data_field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['field'] = 'field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['label'] = '';
    $handler->display->display_options['fields']['field_real_icon']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_real_icon']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_real_icon']['element_wrapper_type'] = 'span';
    $handler->display->display_options['fields']['field_real_icon']['element_wrapper_class'] = 'opencon-grid';
    $handler->display->display_options['fields']['field_real_icon']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_real_icon']['settings'] = array(
        'image_style' => '',
        'image_link' => ''
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['text'] = '[field_real_icon][title]';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
    $handler->display->display_options['fields']['body']['settings'] = array(
        'trim_length' => '600'
    );
    /* Field: Content: Link */
    $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
    $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
    $handler->display->display_options['fields']['view_node']['label'] = '';
    $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view_node']['text'] = 'See full details >';
    /* Sort criterion: Content: Weight (field_weight) */
    $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
    $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
    $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
        'sponsorhsip_type' => 'sponsorhsip_type'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $translatables['sponsorshiptype_main'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('[field_real_icon][title]'),
        t('See full details >'),
        t('Block')
    );
    
    $views[] = $view;
    
    $view = new view();
    $view->name = 'sponsorshiptype_other';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'SponsorshipType Other';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
    
    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '0';
    $handler->display->display_options['pager']['options']['offset'] = '3';
    $handler->display->display_options['style_plugin'] = 'fluid_grid';
    $handler->display->display_options['style_options']['items_width'] = '379';
    $handler->display->display_options['style_options']['items_height'] = '379';
    $handler->display->display_options['style_options']['box_shadow'] = '0';
    $handler->display->display_options['style_options']['border_radius'] = '0';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Content: Icon */
    $handler->display->display_options['fields']['field_real_icon']['id'] = 'field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['table'] = 'field_data_field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['field'] = 'field_real_icon';
    $handler->display->display_options['fields']['field_real_icon']['label'] = '';
    $handler->display->display_options['fields']['field_real_icon']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_real_icon']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_real_icon']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_real_icon']['settings'] = array(
        'image_style' => '',
        'image_link' => ''
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['text'] = '[field_real_icon][title]';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
    $handler->display->display_options['fields']['body']['settings'] = array(
        'trim_length' => '600'
    );
    /* Field: Content: Link */
    $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
    $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
    $handler->display->display_options['fields']['view_node']['label'] = '';
    $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view_node']['text'] = 'See full details >';
    /* Sort criterion: Content: Weight (field_weight) */
    $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
    $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
    $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
        'sponsorhsip_type' => 'sponsorhsip_type'
    );
    
    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $handler->display->display_options['block_description'] = 'SponsorshipType Other';
    $translatables['sponsorshiptype_other'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('[field_real_icon][title]'),
        t('See full details >'),
        t('Block'),
        t('SponsorshipType Other')
    );
    
    $views[] = $view;
    return $views;
}