 
<?php

global $base_url;
$img_url = $base_url . '/sites/all/themes/ViaGo/assets/img';

?>

<div id="tour">
    <?php print drupal_render($content['field_tour_coverphoto']); ?>
            <div id="rondleidingTeaser">
                <div id="overzicht">
                    <ul>
                        <li>
                            <?php print rate_embed($node, 'rate_tour', RATE_FULL); ?>
                        </li>
                        <li>
                            <h5>
                                <?php print $title; ?>
                                <span class="smalllanguage">
                                (
                                <span class="languagewrap">
                                <?php print drupal_render($content['field_tour_languages']);?>
                                </span>
                                )
                                </span>
                            </h5>
                        </li>
                        <li class="teaserelement">
                            <img src="<?php print $img_url . '/wegmarkering_ViaGo.png'?>">
                            <p><?php print drupal_render($content['field_tour_location']); ?></p>
                        </li>
                        <li class="teaserelement">
                            <img src="<?php print $img_url . '/gids_Viago.png'?>">
                            <div class="printname"><?php print $name; ?></div>
                        </li>
                        <li class="teaserelement">
                            <img src="<?php print $img_url . '/money_ViaGo.png'?>">
                            <p><?php print drupal_render($content['field_tour_pricecategory']); ?></p> 
                        </li>
                    </ul>
                </div>
                    <a href="<?php print $base_url . '/' . drupal_get_path_alias('node/' . $node->nid);?>" id="leesmeer">Bekijk deze tour</a>
            </div>
</div>

