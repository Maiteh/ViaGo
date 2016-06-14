<?php

/**
 * @file
 * Bartik's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['featured']: Items for the featured region.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['triptych_first']: Items for the first triptych.
 * - $page['triptych_middle']: Items for the middle triptych.
 * - $page['triptych_last']: Items for the last triptych.
 * - $page['footer_firstcolumn']: Items for the first footer column.
 * - $page['footer_secondcolumn']: Items for the second footer column.
 * - $page['footer_thirdcolumn']: Items for the third footer column.
 * - $page['footer_fourthcolumn']: Items for the fourth footer column.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see nadjmi_process_page()     
 * @see html.tpl.php
 */
global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/assets/img';

$img_uri = $content['field_tour_coverphoto'][0]['#item']['uri'];
$img_url = image_style_url("Cover_tour ", $img_uri);


?>
<div id="fotos">
    <div class="container">
        <div class="row">
            <div class="col-xs-6">
                <h1> <?php print $title;?></h1>
                <ul class="clearfix">
                    <li>
                    <?php print rate_embed($node, 'rate_tour', RATE_FULL); ?>
                    </li>
                <ul>
                <div id="TourCover">
                <img src="<?php echo render(file_create_url($node->field_tour_photos['und'][0]['uri'])); ?>" width="480px" height="319px" />
                </div>
                <div class="row">
                    <div id="TourFoto">
                     <img src="<?php echo render(file_create_url($node->field_tour_photos['und'][1]['uri'])); ?>" width="104px" height="81px" />
                     <img src="<?php echo render(file_create_url($node->field_tour_photos['und'][2]['uri'])); ?>" width="104px" height="81px" />
                     <img src="<?php echo render(file_create_url($node->field_tour_photos['und'][3]['uri'])); ?>" width="104px" height="81px" />
                     <img src="<?php echo render(file_create_url($node->field_tour_photos['und'][4]['uri'])); ?>" width="104px" height="81px" />
                 </div>
                </div>
                <div id="like">
                     <img src="<?php print $image. '/hart.svg'?>" width="7%"/>Voeg toe aan je favorieten
                </div>
            </div>
            <div class="col-xs-6" id="comment">
                <div class="col-xs-6 col-md-4"></div>
                <div class="col-xs-6 col-md-4"><p>Uw enthousiaste gids</p> <strong>
                    <?php if ($page): ?> <?php if ($display_submitted): ?><?php print $name; ?><?php endif; ?><?php endif;?></strong></div>
                <div class="col-xs-6 col-md-4">
                <?php if ($page): ?> <?php if ($display_submitted): ?><?php print $user_picture; ?><?php endif; ?><?php endif;?>
            </div>
                <div id="boeken">
                    <a href="">BOEK NU</a>
                </div>
                <div id="commentaar">
                    <img src="<?php print $image . '/starts.png'?>" width="30%" id="rating" />
                    <h2>"Het was een ontzettend fijne </br> ervaring, de 4 uur vlogen voorbij"</h2>
                    <p>Marjolijn Dekkers, 23 april 2016</p>
                </div>
            </div>
        </div>
    </div>
</div>
<div id="infoBlok">
    <div class="container">
        <div class="row">
            <div class="col-xs-6">
                <ul class="info">
                    <li>
                        <img src="<?php print $image . '/locatie.svg'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_location']); ?>
                    </li>
                    <li>
                        <img src="<?php print $image . '/money.svg'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_pricecategory']); ?>
                    </li>
                    <li>
                        <img src="<?php print $image . '/clock.svg'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_duration']); ?>
                    </li>
                </ul>
            </div>
            <div class="col-xs-6">
                <ul class="info">
                    <li>
                        <img src="<?php print $image . '/multiple.svg'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_participants_amount']); ?>
                    </li>
                    <li>
                        <img src="<?php print $image . '/chat.svg'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_languages']); ?>
                    </li>
                    <li>
                        <img src="<?php print $image . '/thema.png'?>" width="5%"/>
                        <?php print drupal_render($content['field_tour_theme']); ?>
                    </li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div id="beschrijving">
    <div class="container">
         <?php print t('<h2>Beschrijving</h2>') ?>
         <p><?php print drupal_render($content['field_tour_body']); ?></p>  
         <?php print t('<h2>Wat zit in de prijs?</h2>') ?>
         <p><?php print drupal_render($content['field_tour_inclusive']); ?></p>
         <?php print t('<h2>Trefpunt</h2>') ?>
         <p><?php print drupal_render($content['field_tour_gatherpoint']); ?></p>
         </div>
    </div>
<div id="commentRondleiding">
    <div class="container">
     <h2>Meningen van bezokers</h2>
     <?php print drupal_render(comment_node_page_additions($node)); ?>
     <?php print drupal_render(drupal_get_form("comment_node_{$node->type}_form", (object) array('nid' => $node->nid))); ?>
</div>
</div>
     


</div>   
    </div>