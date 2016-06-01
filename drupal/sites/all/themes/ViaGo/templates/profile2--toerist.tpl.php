<?php

global $base_url;
global $user;
$account = user_load($user->uid);


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
                            <strong><?php print $account->field_user_firstname[LANGUAGE_NONE][0]['value']; ?> <?php print $account->field_user_name[LANGUAGE_NONE][0]['value']; ?> </strong>
                        </ul>
                        
                        
                    </div>
                </div>

            </div>
            <div class="col-xs-6">
               
            </div>

        </div>
                    <div id="acountbeschrijving">
                        <h2>Accountgegevens </h2> 
                        <p>Username: <?php  print $user->name; ?> </p>
                        <p>E-mailadres: <?php print $user->mail; ?></p>
                        <p>Wachtwoord: ****** </p>

                       

                        
                        <h2>Mijn favoriete rondleidingen</h2>
                   </div>
    </div>
</body>