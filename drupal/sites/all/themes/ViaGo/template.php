<?php


//function nadjmi_form_element($variables) {
//  $element = &$variables['element'];
//  // This function is invoked as theme wrapper, but the rendered form element
//  // may not necessarily have been processed by form_builder().
//  $element += array(
//    '#title_display' => 'before',
//  );
//
//  // Add element #id for #type 'item'.
//  if (isset($element['#markup']) && !empty($element['#id'])) {
//    $attributes['id'] = $element['#id'];
//  }
//  // Add element's #type and #name as class to aid with JS/CSS selectors.
//  $attributes['class'] = array('form-item');
//  if (!empty($element['#type'])) {
//    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
//  }
//  if (!empty($element['#name'])) {
//    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
//  }
//  // Add a class for disabled elements to facilitate cross-browser styling.
//  if (!empty($element['#attributes']['disabled'])) {
//    $attributes['class'][] = 'form-disabled';
//  }
//  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";
//
//  // If #title is not set, we don't display any label or required marker.
//  if (!isset($element['#title'])) {
//    $element['#title_display'] = 'none';
//  }
//  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
//  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';
//
//  switch ($element['#title_display']) {
//    case 'before':
//    case 'invisible':
//      if($element['#type'] == 'radio' || $element['#type'] == 'checkbox' && !empty($element['#id']))
//      $output .= ' ' . theme('form_element_label', $variables);
//      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
//      break;
//
//    case 'after':
//      $output .= ' ' . $prefix . $element['#children'] . $suffix;
//      $output .= '<label for="' . $element['#id'] . '"></label>';
//      $output .= ' ' . theme('form_element_label', $variables) . "\n";
//      break;
//
//    case 'none':
//    case 'attribute':
//      // Output no label and no required marker, only the children.
//      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
//      break;
//  }
//
//  if (!empty($element['#description'])) {
//    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
//  }
//
//  $output .= "</div>\n";
//
//  return $output;
//}
//
//
//function nadjmi_textfield($variables) {
//  $element = $variables['element'];
//  $element['#attributes']['type'] = 'text';
//  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));
//  _form_set_class($element, array('form-text'));
//
//  $extra = '';
//  if ($element['#autocomplete_path'] && !empty($element['#autocomplete_input'])) {
//    drupal_add_library('system', 'drupal.autocomplete');
//    $element['#attributes']['class'][] = 'form-autocomplete';
//
//    $attributes = array();
//    $attributes['type'] = 'hidden';
//    $attributes['id'] = $element['#autocomplete_input']['#id'];
//    $attributes['value'] = $element['#autocomplete_input']['#url_value'];
//    $attributes['disabled'] = 'disabled';
//    $attributes['class'][] = 'autocomplete';
//    $extra = '<input' . drupal_attributes($attributes) . ' />';
//  }
//  $element['#attributes']['class'][] = 'form-control';
//
//  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
//
//  return $output . $extra;
//}
//
//
//
//function nadjmi_textarea($variables) {
//  $element = $variables['element'];
//  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
//  _form_set_class($element, array('form-textarea'));
//
//  $wrapper_attributes = array(
//    'class' => array('form-textarea-wrapper'),
//  );
//
//  // Add resizable behavior.
//  if (!empty($element['#resizable'])) {
//    drupal_add_library('system', 'drupal.textarea');
//    $wrapper_attributes['class'][] = 'resizable';
//  }
//  $element['#attributes']['class'][] = 'form-control';
//
//  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
//  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
//  $output .= '</div>';
//  return $output;
//}