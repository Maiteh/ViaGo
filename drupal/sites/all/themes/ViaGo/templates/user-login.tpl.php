

<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/assets/img';


?>

<body id="inloggen">
<div id="login">  
    <div class="row">
        <div class="col-xs-6" id="loginformlogin">
        <h2>Meld je hier aan</h2>
                   <?php print drupal_render_children($form) ?>       
        <a href="<?php print $base_url . '/' . drupal_get_path_alias('user/password');?>">Wachtwoord vegeten?</a>
        </div>
        <div class="col-xs-6"><img src="<?php print $image . '/gent_4.jpg'?>" width="100%" /></div>
    </div>
    </div>
</body>






