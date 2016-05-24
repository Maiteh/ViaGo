<?php
/**
 * @file
 * viago_users.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function viago_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-gidssub_mijn-account:user/4.
  $menu_links['menu-gidssub_mijn-account:user/4'] = array(
    'menu_name' => 'menu-gidssub',
    'link_path' => 'user/4',
    'router_path' => 'user/%',
    'link_title' => 'Mijn account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-gidssub_mijn-account:user/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-gidssub_rondleiding-toevoegen:node/add/tours.
  $menu_links['menu-gidssub_rondleiding-toevoegen:node/add/tours'] = array(
    'menu_name' => 'menu-gidssub',
    'link_path' => 'node/add/tours',
    'router_path' => 'node/add/tours',
    'link_title' => 'Rondleiding toevoegen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-gidssub_rondleiding-toevoegen:node/add/tours',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Log out');
  t('Login');
  t('Mijn account');
  t('Rondleiding toevoegen');
  t('User account');

  return $menu_links;
}
