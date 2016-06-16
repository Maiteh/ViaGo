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
$img_url = $base_url . '/sites/all/themes/ViaGo/assets/img';

?>

 <nav>
        <div class="container">
            <div class="row">
                <div class="col-xs-5 header-logo">
                    <a href="<?php print $base_url . '/' . drupal_get_path_alias('node');?>"><img src="<?php print $img_url . '/logo.png'?>" alt="" class="logo"></a>
                    <form>
                        <input id="zoekbalk" value="Zoek rondleiding, stad of gids" > </input>
                    </form>
                </div>                          
                    <ul>
                       <?php print render($page['header']); ?>
                    </ul>
            </div>
        </div>
    </nav>
<div id="subnav"><?php print render($page['highlighted']); ?></div>
                                
    <header>

        <div class="container">
            <?php print t('<p>De <strong>professionele</strong> gidsen bij ViaGo</p>') ?>
            <?php print t('<p>bieden <strong>authentieke, persoonlijke en kwaliteitsvolle</strong></p>') ?>
            <?php print t('<p>rondleidingen aan in <strong>België</strong></p>') ?>
            <div id="zoekKnop">
                <a href="<?php print $base_url . '/' . drupal_get_path_alias('rondleidingen');?>" id="zoeken">Zoek nu!</a>
            </div>
        </div>
    </header>

    <section class="workflow">
        <ul>
            <li name="stap1">
                <img src="<?php print $img_url . '/nummer1.png'?>">
                <?php print t('<p>Vind rondleidingen met onze searchfunctie</p>') ?>
            </li>
            <div class="tussenlijn"></div>
            <li name="stap2">
                <img src="<?php print $img_url . '/nummer2.png'?>">
                <?php print t('<p>Spreek met de gids af per mail</p>') ?>
            </li>
            <div class="tussenlijn"></div>
            <li name="stap3">
                <img src="<?php print $img_url . '/nummer3.png'?>">
                <?php print t('<p>Geniet van je rondleiding</p>') ?>
            </li>
            <div class="clearfix"></div>
        </ul>
    </section>
    


    <section class="for-full-back color-white" id="rondleidingen">
        <div class="container">
            <div class="row text-center g-pad-bottom">
            </div>

            <h3>Nieuwste rondleidingen</h3>
              
                <div id="nieuwsteRondleidingen"><?php print render($page['help']); ?></div>


            <h3>Populairste rondleidingen</h3>
              
                    <div class="col-md-4 col-sm-2 col-xs-8">
                        <a href="#"><img src="<?php print $img_url . '/rondleiding4.jpg'?>" height="auto" width="100%"></a>
                            <div id="rondleiding">
                                <img src="<?php print $img_url . '/starts.png'?>" width="20%"/>
                                <h5>Authentiek Antwerpen <strong>(Nl, En, Fr)</strong> </h5>
                                    <div id ="overzicht">
                                        <p><img src="<?php print $img_url . '/wegmarkering_ViaGo.png' ?>" width="8%"/>Antwerpen</p>
                                        <p><img src="<?php print $img_url . '/mannetje_ViaGo.png' ?>" width="8%"/>Sven Deridder</p>
                                        <p><img src="<?php print $img_url . '/money_ViaGo.png' ?>" width="8%" /></p>
                                    </div>
                                <a href="#" id="leesmeer">Bekijk deze tour ></a>
                            </div>
                    </div>
                    <div class="col-md-4 col-sm-2 col-xs-8" >
                        <a href="#"><img src="<?php print $img_url . '/rondleiding5.jpg'?>" height="auto" width="100%"></a>
                            <div id="rondleiding">
                                <img src="<?php print $img_url . '/starts.png'?>" width="20%"/>
                                <h5>Scheldeland en natuur<strong>(Nl)</strong> </h5>
                                    <div id ="overzicht">
                                        <p><img src="<?php print $img_url . '/wegmarkering_ViaGo.png' ?>" width="8%"/>Antwerpen, Linkeroever</p>
                                        <p><img src="<?php print $img_url . '/mannetje_ViaGo.png' ?>" width="8%"/>Marian Tielemans</p>
                                        <p><img src="<?php print $img_url . '/money_ViaGo.png' ?>" width="8%" /></p>
                                    </div>
                                <a href="#" id="leesmeer">Bekijk deze tour ></a>
                            </div>
                    </div>
                    <div class="col-md-4 col-sm-2 col-xs-8" >
                        <a href="#"><img src="<?php print $img_url . '/rondleiding6.jpg'?>" height="auto" width="100%"></a>
                            <div id="rondleiding">
                                <img src="<?php print $img_url . '/starts.png'?>" width="20%"/>
                                <h5>Westkust te paard <strong>(Nl, Fr)</strong> </h5>
                                    <div id ="overzicht">
                                        <p><img src="<?php print $img_url . '/wegmarkering_ViaGo.png' ?>" width="8%"/>Westkust, West-vlaanderen</p>
                                        <p><img src="<?php print $img_url . '/mannetje_ViaGo.png' ?>" width="8%"/>Christel Van der Meers</p>
                                        <p><img src="<?php print $img_url . '/money_ViaGo.png' ?>" width="8%" /></p>
                                    </div>
                                <a href="#" id="leesmeer">Bekijk deze tour ></a>
                            </div>
                    </div>

                  
    </section>
    <section id="info">
        <div class="container">
        <div class="row">
            <div class="col-xs-6">
                 <h2>Waarom ViaGo?</h2>
                 <div id="waarom">
                     <ul>
                         <li class="clearfix">
                            <img src="<?php print $img_url . '/WaaromViaGo_belgie.png' ?>" width="10%"/>
                            <?php print t('<p>ViaGo is uniek want ze geeft gidsen in heel </br>
                            België de kans om hun rondleidingen aan </br> te bieden.</p>') ?>
                        </li>
                        <li class="clearfix">
                            <img src="<?php print $img_url . '/WaaromViaGo_ster.png' ?>" width="10%"/>
                            <?php print t('<p>De zoekmachine van ViaGo is gebouwd </br>
                            zodat elke bezoeker gemakkelijk zijn of </br> haar ideale rondleiding kan vinden.</p>') ?>
                        </li>
                    </ul>
                 </div>
            </div>
            <div class="col-xs-6" id="filmpje">
                <iframe src="https://player.vimeo.com/video/167528777?title=0&byline=0&portrait=0" width="500" height="275" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
            </div>
        </div>
    </section>

    <section id="lid">
        <div class="container">
        <?php print t('<h2>Word lid bij ViaGo</h2>') ?>
        <?php print t('<p>Ben jij een gids en wil je je rondleiding bij ons </br>aanbieden? Dat kan!</p>') ?>
        <div id="lidworden">
            <a href="<?php print $base_url . '/' . drupal_get_path_alias('user/register');?>" id="bezokerworden" class="registreerlinks">Registreer als bezoeker</a>
            <a href="<?php print $base_url . '/' . drupal_get_path_alias('guide/register');?>" id="gidsworden" class="registreerlinks">Registreer als gids</a>
            <div class="clearfix"></div>
        </div>
        </div>
    </section>
    <section id="nieuwsbrief">
        <div class="container">
            <div id="subscribe">
                <div>
                     <?php print t('<label for="optin-email">Schrijf je in om up-to-date te blijven!</label>') ?>
                </div>
                <div class="col-sm-12 nieuwsbriefcontainer">
                    <input type="text" name="optin-email" id="optin-email" placeholder="Uw email adres">
                    <div class="nieuwsbriefmargin"></div>
                    <input type="submit" value="Verzend">
                </div>
            </div>
        </div>
    </section>  


<footer class="text-center">
        <div class="footer-above">
            <div class="container">
                <div class="row">
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Contact</h3></br></br>') ?>
                        <?php print t('<p>Lorem</p></br>') ?>
                        <?php print t('<p>Ipsum</p></br>') ?>
                        <?php print t('<p>Whatsoever</p>') ?>

                    </div>
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Zoek</h3></br></br>') ?>
                        <?php print t('<p>Rondleiding</p></br>') ?>
                        <?php print t('<p>Gidsen</p></br>') ?>
  
                    </div>
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Volg ViaGo</h3></br></br>') ?>
                        <?php print t('<p>Facebook</p></br>') ?>
                        <?php print t('<p>Twitter</p> </br>') ?>
                        <?php print t('<p>And so on.</p> </br>') ?>
                    </div>
                </div>
            </div>
        </div>

    </footer>
