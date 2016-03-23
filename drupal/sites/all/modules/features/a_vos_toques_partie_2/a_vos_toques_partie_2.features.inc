<?php
/**
 * @file
 * a_vos_toques_partie_2.features.inc
 */

/**
 * Implements hook_node_info().
 */
function a_vos_toques_partie_2_node_info() {
  $items = array(
    'recette' => array(
      'name' => t('Recette'),
      'base' => 'node_content',
      'description' => t('Ajouter une recette sur ce site'),
      'has_title' => '1',
      'title_label' => t('Titre de la recette'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
