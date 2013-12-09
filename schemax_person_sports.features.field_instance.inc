<?php
/**
 * @file
 * schemax_person_sports.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function schemax_person_sports_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-schemax_person-field_schemax_player_id'
  $field_instances['node-schemax_person-field_schemax_player_id'] = array(
    'bundle' => 'schemax_person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schemax_player_id',
    'label' => 'Player ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Player ID');

  return $field_instances;
}
