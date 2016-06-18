<nav>
    <div class="container">
        <div class="row">
            <div class="col-xs-5 header-logo">
                <a href="<?php print $base_url . '/' . drupal_get_path_alias('node');?>"><img src="<?php print $img_url . '/logo.png'?>" alt="" class="logo"></a>
            </div>                          
            <ul>
               <?php print render($page['header']); ?>
            </ul>
        </div>
    </div>
</nav>

<div id="subnav"><?php print render($page['highlighted']); ?></div>