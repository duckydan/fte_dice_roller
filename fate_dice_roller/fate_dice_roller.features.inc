<?php
/**
 * @file
 * fate_dice_roller.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fate_dice_roller_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
