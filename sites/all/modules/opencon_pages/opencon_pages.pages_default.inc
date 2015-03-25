<?php
/**
 * Implementation of hook_default_page_manager_pages().
 */
function opencon_pages_default_page_manager_pages() {
    $pages = array();
    $page = new stdClass();
    $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
    $page->api_version = 1;
    $page->name = 'onepage';
    $page->task = 'page';
    $page->admin_title = 'Onepage';
    $page->admin_description = '';
    $page->path = 'front';
    $page->access = array();
    $page->menu = array();
    $page->arguments = array();
    $page->conf = array(
        'admin_paths' => FALSE,
    );
    $page->default_handlers = array();
    $handler = new stdClass();
    $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
    $handler->api_version = 1;
    $handler->name = 'page_onepage_panel_context';
    $handler->task = 'page';
    $handler->subtask = 'onepage';
    $handler->handler = 'panel_context';
    $handler->weight = 0;
    $handler->conf = array(
        'title' => 'Panel',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'body_classes_to_remove' => '',
        'body_classes_to_add' => '',
        'css_id' => '',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
        'did' => '1',
    );
    $page->default_handlers[$handler->name] = $handler;
    $pages['page-onepage'] = $page;
    return $pages;
}