<?php

class menu_token_ogmk_og_context_shop implements menu_token_handler {
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
    $contexts = og_context();

    if (empty($contexts['group_type']) || $contexts['group_type'] !== 'node') {
      return FALSE;
    }

    $shopId = $contexts['gid'];
    $shop   = node_load($shopId);

    /**
     * @Issue(
     *   "Consider adding validation that the group node is of type 'shop'"
     *   type="improvement"
     *   priority="low"
     * )
     */

    if ($shop) {
      return $shop;
    }

    return FALSE;
  }
}
