<?php
/**
 * @file
 * pressflow_7_ready_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pressflow_7_ready_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.search' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => TRUE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_skip';
  $strongarm->value = array(
    'admin_devel' => 0,
    'devel' => 0,
    'devel_node_access' => 0,
    'field_ui' => 0,
    'rules_admin' => 0,
    'views_ui' => 0,
  );
  $export['admin_menu_devel_modules_skip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'garland';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced__active_tab';
  $strongarm->value = 'edit-performance';
  $export['advanced__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_files';
  $strongarm->value = array(
    0 => 'public://color/garland-f8754dff/menu-collapsed.gif',
    1 => 'public://color/garland-f8754dff/menu-collapsed-rtl.gif',
    2 => 'public://color/garland-f8754dff/menu-expanded.gif',
    3 => 'public://color/garland-f8754dff/menu-leaf.gif',
    4 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/body.png',
    5 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-bar.png',
    6 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-bar-white.png',
    7 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-tab.png',
    8 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-navigation.png',
    9 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-content-left.png',
    10 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-content-right.png',
    11 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-content.png',
    12 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-navigation-item.png',
    13 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/bg-navigation-item-hover.png',
    14 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/gradient-inner.png',
    15 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/logo.png',
    16 => '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/screenshot.png',
    17 => 'public://color/garland-f8754dff/style.css',
    18 => 'public://color/garland-f8754dff/style-rtl.css',
  );
  $export['color_garland_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_logo';
  $strongarm->value = 'public://color/garland-f8754dff/logo.png';
  $export['color_garland_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_palette';
  $strongarm->value = array(
    'base' => '#464849',
    'link' => '#2f416f',
    'top' => '#2a2b2d',
    'bottom' => '#5d6779',
    'text' => '#494949',
  );
  $export['color_garland_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_screenshot';
  $strongarm->value = '/Users/paulthuntsberger/Sites/drupal/test_7/sites/default/files/color/garland-f8754dff/screenshot.png';
  $export['color_garland_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_stylesheets';
  $strongarm->value = array(
    0 => 'public://color/garland-f8754dff/style.css',
    1 => 'public://color/garland-f8754dff/style-rtl.css',
  );
  $export['color_garland_stylesheets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'xdbChuiyMUlML5gsFhvXHu8Y0b4VHyPOPKAZK8OGWRA';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1385599436;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'mwxyd7';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Denver';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '6l8OGxmXF5KXaQDFNAhpGHDCuAVD-VXAf7KhLc9fALE';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'minimal';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1385586223;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 493,
    4 => 485,
    5 => 253,
    6 => 252,
    7 => 250,
    8 => 247,
    9 => 246,
    10 => 245,
    11 => 243,
    12 => 242,
    13 => 127,
    14 => 126,
    15 => 125,
    16 => 124,
    17 => 123,
    18 => 122,
    19 => 121,
    20 => 63,
    21 => 62,
    22 => 61,
    23 => 60,
    24 => 58,
    25 => 44,
    26 => 31,
    27 => 30,
    28 => 29,
    29 => 24,
    30 => 23,
    31 => 21,
    32 => 15,
    33 => 14,
    34 => 11,
    35 => 7,
    36 => 6,
    37 => 5,
    38 => 3,
    39 => 2,
    40 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 0;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array();
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_event_whitelist';
  $strongarm->value = array();
  $export['rules_event_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'paul+pressflow7@303software.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'pressflow 7';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'garland';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_garland_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'garland_width' => 'fluid',
    'scheme' => 'ash',
    'palette' => array(
      'base' => '#464849',
      'link' => '#2f416f',
      'top' => '#2a2b2d',
      'bottom' => '#5d6779',
      'text' => '#494949',
    ),
    'theme' => 'garland',
    'info' => array(
      'fields' => array(
        'base' => 'Base color',
        'link' => 'Link color',
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'text' => 'Text color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (Default)',
          'colors' => array(
            'base' => '#0072b9',
            'link' => '#027ac6',
            'top' => '#2385c2',
            'bottom' => '#5ab5ee',
            'text' => '#494949',
          ),
        ),
        'ash' => array(
          'title' => 'Ash',
          'colors' => array(
            'base' => '#464849',
            'link' => '#2f416f',
            'top' => '#2a2b2d',
            'bottom' => '#5d6779',
          ),
        ),
        'aquamarine' => array(
          'title' => 'Aquamarine',
          'colors' => array(
            'base' => '#55c0e2',
            'link' => '#000000',
            'text' => '#696969',
            'top' => '#085360',
            'bottom' => '#007e94',
          ),
        ),
        'chocolate' => array(
          'title' => 'Belgian Chocolate',
          'colors' => array(
            'base' => '#d5b048',
            'link' => '#6c420e',
            'top' => '#331900',
            'bottom' => '#971702',
          ),
        ),
        'bluemarine' => array(
          'title' => 'Bluemarine',
          'colors' => array(
            'base' => '#3f3f3f',
            'link' => '#336699',
            'text' => '#000000',
            'top' => '#6598cb',
            'bottom' => '#6598cb',
          ),
        ),
        'citrus' => array(
          'title' => 'Citrus Blast',
          'colors' => array(
            'base' => '#d0cb9a',
            'link' => '#917803',
            'top' => '#efde01',
            'bottom' => '#e6fb2d',
          ),
        ),
        'cold' => array(
          'title' => 'Cold Day',
          'colors' => array(
            'base' => '#0f005c',
            'link' => '#434f8c',
            'text' => '#000000',
            'top' => '#4d91ff',
            'bottom' => '#1a1575',
          ),
        ),
        'greenbeam' => array(
          'title' => 'Greenbeam',
          'colors' => array(
            'base' => '#c9c497',
            'link' => '#0c7a00',
            'top' => '#03961e',
            'bottom' => '#7be000',
          ),
        ),
        'mediterrano' => array(
          'title' => 'Mediterrano',
          'colors' => array(
            'base' => '#ffe23d',
            'link' => '#a9290a',
            'top' => '#fc6d1d',
            'bottom' => '#a30f42',
          ),
        ),
        'mercury' => array(
          'title' => 'Mercury',
          'colors' => array(
            'base' => '#788597',
            'link' => '#3f728d',
            'top' => '#a9adbc',
            'bottom' => '#d4d4d4',
            'text' => '#707070',
          ),
        ),
        'nocturnal' => array(
          'title' => 'Nocturnal',
          'colors' => array(
            'base' => '#5b5fa9',
            'link' => '#5b5faa',
            'top' => '#0a2352',
            'bottom' => '#9fa8d5',
          ),
        ),
        'olivia' => array(
          'title' => 'Olivia',
          'colors' => array(
            'base' => '#7db323',
            'link' => '#6a9915',
            'top' => '#b5d52a',
            'bottom' => '#7db323',
            'text' => '#191a19',
          ),
        ),
        'pink_plastic' => array(
          'title' => 'Pink Plastic',
          'colors' => array(
            'base' => '#12020b',
            'link' => '#1b1a13',
            'top' => '#f391c6',
            'bottom' => '#f41063',
            'text' => '#898080',
          ),
        ),
        'shiny_tomato' => array(
          'title' => 'Shiny Tomato',
          'colors' => array(
            'base' => '#b7a0ba',
            'link' => '#c70000',
            'top' => '#a1443a',
            'bottom' => '#f21107',
            'text' => '#515d52',
          ),
        ),
        'teal_top' => array(
          'title' => 'Teal Top',
          'colors' => array(
            'base' => '#18583d',
            'link' => '#1b5f42',
            'top' => '#34775a',
            'bottom' => '#52bf90',
            'text' => '#2d2d2d',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'copy' => array(
        0 => 'images/menu-collapsed.gif',
        1 => 'images/menu-collapsed-rtl.gif',
        2 => 'images/menu-expanded.gif',
        3 => 'images/menu-leaf.gif',
      ),
      'css' => array(
        0 => 'style.css',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 38,
            2 => 760,
            3 => 121,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(
        'base' => array(
          0 => 0,
          1 => 0,
          2 => 760,
          3 => 568,
        ),
        'link' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
      ),
      'slices' => array(
        'images/body.png' => array(
          0 => 0,
          1 => 37,
          2 => 1,
          3 => 280,
        ),
        'images/bg-bar.png' => array(
          0 => 202,
          1 => 530,
          2 => 76,
          3 => 14,
        ),
        'images/bg-bar-white.png' => array(
          0 => 202,
          1 => 506,
          2 => 76,
          3 => 14,
        ),
        'images/bg-tab.png' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
        'images/bg-navigation.png' => array(
          0 => 0,
          1 => 0,
          2 => 7,
          3 => 37,
        ),
        'images/bg-content-left.png' => array(
          0 => 40,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content-right.png' => array(
          0 => 510,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content.png' => array(
          0 => 299,
          1 => 117,
          2 => 7,
          3 => 200,
        ),
        'images/bg-navigation-item.png' => array(
          0 => 32,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/bg-navigation-item-hover.png' => array(
          0 => 54,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/gradient-inner.png' => array(
          0 => 646,
          1 => 307,
          2 => 112,
          3 => 42,
        ),
        'logo.png' => array(
          0 => 622,
          1 => 51,
          2 => 64,
          3 => 73,
        ),
        'screenshot.png' => array(
          0 => 0,
          1 => 37,
          2 => 400,
          3 => 240,
        ),
      ),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  );
  $export['theme_garland_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1385599437;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'paul+pressflow7@303software.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
