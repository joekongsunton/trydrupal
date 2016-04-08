<?php
/**
 * @file
 * a_vos_toques_partie_2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function a_vos_toques_partie_2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-liens-divers.
  $menus['menu-liens-divers'] = array(
    'menu_name' => 'menu-liens-divers',
    'title' => 'Liens Divers',
    'description' => 'Liste de liens divers.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Liens Divers');
  t('Liste de liens divers.');

  return $menus;
}
