


<?php

global $base_url;
$image = $base_url . '/sites/all/themes/ViaGo/img';
$account = user_load($user->uid);


?>

<body id="account">
    <div id="accountblok">  
        <div class="row">
             <div class="col-xs-6" id="accountform">
                <div class="row">
                    <div class="col-xs-6">
                        <?php print drupal_render($content['field_user_guide_profilepic']); ?>
                    </div>
                    <div class="col-xs-6">
                        <ul id="gegevens">
                            <strong><?php print $account->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> <?php print $account->field_user_name[LANGUAGE_NONE][0]['value']; ?> </strong>
                            <li><?php print render($content['field_user_guide_birthdate']); ?></li>
                            <li><?php print render($content['field_user_guide_experience']); ?></li>
                            <li><?php print render($content['field_user_guide_languages']); ?></li>
                        </ul>
                        
                        
                    </div>
                </div>

            </div>
            <div class="col-xs-6">
               
            </div>

        </div>
                    <div id="acountbeschrijving">
                        <h2>Over <?php print $account->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> </h2>
                        <p><?php print render($content['field_user_guide_description']); ?></p>
                        
                        <h2>Waarom <?php print $account->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> Boeken?</h2>
                    </div>
    </div>
</body>










