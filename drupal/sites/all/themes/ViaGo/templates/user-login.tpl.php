
<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/img';


?>

<body id="inloggen">
<div id="login">  
    <div class="row">
        <div class="col-xs-6" id="loginform">
        <h2>Meld je hier aan</h2>
            	   <?php print drupal_render($form['name']);
   					 	 print drupal_render($form['pass']);
    					 print drupal_render($form['form_build_id']);
    					 print drupal_render($form['form_id']);
    					 print drupal_render($form['actions']); ?>        
        <a href="<?php print $base_url . '/' . drupal_get_path_alias('user/password');?>">wachtwoord vegeten?</a>
        </div>
        <div class="col-xs-6"><img src="<?php print $image . '/gent_4.jpg'?>" width="100%" /></div>
    </div>
    </div>
</body>










