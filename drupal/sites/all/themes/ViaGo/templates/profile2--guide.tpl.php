


<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/img';
$account = user_load($user->uid);


?>

<body id="inloggen">
<div id="login">  
    <div class="row">
        <div class="col-xs-6" id="accountform">
        <h2>Mijn account</h2>
        <div id="basicInfo">
        <strong>Naam: </strong>
        <?php print $account->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> 
        <?php print $account->field_user_name[LANGUAGE_NONE][0]['value']; ?> </br>
        <strong>GSM-Nummer: </strong>
        <?php print $account->field_user_phone[LANGUAGE_NONE][0]['value']; ?> 
      </div>
        <?php print render($content['field_user_guide_experience']); ?>
        <?php print render($content['field_user_guide_birthdate']); ?>
        <?php print render($content['field_user_guide_address']); ?>
        <?php print render($content['field_user_guide_languages']); ?>

        </div>
        <div class="col-xs-6"><img src="<?php print $image . '/gent_4.jpg'?>" width="100%" /></div>
    </div>
    </div>
</body>









