<?php
/**
 * @file
 * ogmk_shops.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ogmk_shops_default_rules_configuration() {
  $items = array();
  $items['rules_ogmk_shops_merchant_logged_in'] = entity_import('rules_config', '{ "rules_ogmk_shops_merchant_logged_in" : {
      "LABEL" : "Merchant logged in",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "3" : "3" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "[account:ogmk-shop-manage-url]" } } ]
    }
  }');
  return $items;
}
