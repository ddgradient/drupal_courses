<?php
/**
 * @file
 * feature_content_type_sport_teams.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_content_type_sport_teams_node_info() {
  $items = array(
    'sport_teams' => array(
      'name' => t('Sport teams'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
