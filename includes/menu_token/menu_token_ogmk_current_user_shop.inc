<?php

class menu_token_ogmk_current_user_shop implements menu_token_handler {
  function form_options($options) {
    // Nothing to do here.
  }

  function form_submit($form, &$form_state) {
    // Nothing to do here.
  }

  function form_validate($form, &$form_state) {
    // Nothing to do here.
  }

  function form_alter(&$form, &$form_state) {
    // Nothing to do here.
  }

  function object_load($options) {
    $shop = commerce_ogmk_shops_user_get_shop();

    if ($shop) {
      return $shop;
    }

    return FALSE;
  }
}
