<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/assets/img';


?>

<body id="registreren">
<div id="register">  
        <div id="registerform">
        <h2>Registreren</h2>
           <?php print drupal_render_children($form) ?>       
    </div>
    </div>
</body>