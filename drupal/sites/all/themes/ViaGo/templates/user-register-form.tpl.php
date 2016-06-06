<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/assets/img';


?>

<body id="inloggen">
<div id="login">  
    <div class="row">
        <div class="col-xs-6" id="loginform">
        <h2>Registreer mij als user</h2>
           <?php print drupal_render_children($form) ?>       
        </div>
    </div>
    </div>
</body>