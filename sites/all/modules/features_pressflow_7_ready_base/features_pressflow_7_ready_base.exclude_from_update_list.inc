<?php
/**
 * @file
 * features_pressflow_7_ready_base.exclude_from_update_list.inc
 */

/**
 * Implements hook_update_projects_alter().
 */

function features_pressflow_7_ready_base_update_projects_alter(&$projects) {
  unset($projects['features_pressflow_7_ready_base']);
}