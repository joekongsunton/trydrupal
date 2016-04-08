<?php
/**
 * @file
 * a_vos_toques_partie_2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function a_vos_toques_partie_2_taxonomy_default_vocabularies() {
  return array(
    'difficult_' => array(
      'name' => 'Difficulté',
      'machine_name' => 'difficult_',
      'description' => 'Indique la difficulté de réalisation de la recette',
      'hierarchy' => 0,
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
    'provenance' => array(
      'name' => 'Provenance',
      'machine_name' => 'provenance',
      'description' => 'Provenance géographique de la recette',
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
