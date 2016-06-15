


<?php

global $base_url;
$account = user_load($user->uid);
$myprofile = profile2_load_by_user($account, 'guide');


?>

<body id="account">
    <div id="accountblok">  
        <div class="row">
             <div class="col-xs-6" id="accountform">
                <div class="row">
                    <div class="col-xs-6">
                        
                    </div>
                    <div class="col-xs-6">
                        <ul id="gegevens">
                           <!-- <strong><? /*php print $myprofile->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> <?php print $myprofile->field_user_name[LANGUAGE_NONE][0]['value']; ?> </strong>
                            <li><?php print render($myprofile->field_user_guide_birthdate[LANGUAGE_NONE][0]['value']);?>test</li>
                            <li><?php print render($myprofile->field_user_guide_experience[LANGUAGE_NONE][0]['value']); ?></li>
                            <li><?php print render($myprofile->field_user_guide_languages[LANGUAGE_NONE][0]['value']); */?></li> -->
                        </ul>
                        
                        
                    </div>
                </div>

            </div>
            <div class="col-xs-6">
               
            </div>

        </div>
                    <div id="acountbeschrijving">
                        
                        <h2><?php print $myprofile->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> </h2>
                        <p><?php print render($myprofile->field_user_description[LANGUAGE_NONE][0]['value']); ?></p>
                       <!-- <h2>Waarom <?php print $myprofile->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> Boeken?</h2>-->
                    </div>
    </div>
</body>










