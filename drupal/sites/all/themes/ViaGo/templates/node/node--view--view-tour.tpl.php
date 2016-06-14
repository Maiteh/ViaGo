 
<?php

global $base_url;
$img_url = $base_url . '/sites/all/themes/ViaGo/assets/img';

?>

            <div id="tour">
                <?php print drupal_render($content['field_tour_coverphoto']); ?>
                        <div id="rondleidingTeaser">
                            <div id="overzicht">
                                <?php print rate_embed($node, 'rate_tour', RATE_FULL); ?>
                                <h5><?php print $title;?></h5>
                                <p><?php print drupal_render($content['field_tour_location']); ?></p>
                                <p><?php print drupal_render($content['field_tour_languages']); ?></p>
                                <p><?php print drupal_render($content['field_tour_pricecategory']); ?></p>  
                            </div>
                                <a href="<?php print $base_url . '/' . drupal_get_path_alias('node/' . $node->nid);?>" id="leesmeer">Bekijk deze tour ></a>
                        </div>
            </div>

