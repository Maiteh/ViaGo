 
<?php

global $base_url;
$img_url = $base_url . '/sites/all/themes/ViaGo/img';

?>

 <section class="for-full-back color-white" id="rondleidingen">
        <div class="container">
            <div class="row text-center g-pad-bottom">
            </div>
                    <div class="col-md-4 col-sm-2 col-xs-8">
                        <?php print drupal_render($content['field_tour_coverphoto']); ?>
                            <div id="rondleiding">
                                    <div id ="overzicht">
                                        <h5><?php print $title;?></h5>
                                        <p><?php print drupal_render($content['field_tour_location']); ?></p>
                                        <p><?php print drupal_render($content['field_tour_languages']); ?></p>
                                        <p><?php print drupal_render($content['field_tour_pricecategory']); ?></p>  
                                    </div>
                                <a href="<?php print $base_url . '/' . drupal_get_path_alias('node/' . $node->nid);?>" id="leesmeer">Bekijk deze tour ></a>
                            </div>
                    </div>

