<?php
/**
 * @file
 * grant_feature_demo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function grant_feature_demo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'grant_node';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'grant' => 'grant',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-grants-block_1' => array(
          'module' => 'views',
          'delta' => 'grants-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-grants-block_2' => array(
          'module' => 'views',
          'delta' => 'grants-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-grants-block_4' => array(
          'module' => 'views',
          'delta' => 'grants-block_4',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['grant_node'] = $context;

  return $export;
}
