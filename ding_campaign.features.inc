<?php
/**
 * @file
 * ding_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

