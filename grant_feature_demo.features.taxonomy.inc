<?php
/**
 * @file
 * grant_feature_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function grant_feature_demo_taxonomy_default_vocabularies() {
  return array(
    'program' => array(
      'name' => 'Program',
      'machine_name' => 'program',
      'description' => 'Program, campaign, operational areas for site-wide grouping of content',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
