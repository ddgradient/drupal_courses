/**
 * @file autocomplete_ui behaviours.
 */
(function ($) {

  Drupal.behaviors.jqueryui_autocomplete = {
    attach: function (context, settings) {
      $('input[name="title"]', context).autocomplete({
        source: Drupal.settings.basePath + 'test/autocomplete'
      });
    }
  };

}(jQuery));