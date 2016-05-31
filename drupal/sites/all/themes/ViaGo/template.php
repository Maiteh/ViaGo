<?php




function viago_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'ViaGo') . '/templates',
  'template' => 'user-login',
  'preprocess functions' => array(
  'viago_preprocess_user_login'
  ),
 );
return $items;
}
