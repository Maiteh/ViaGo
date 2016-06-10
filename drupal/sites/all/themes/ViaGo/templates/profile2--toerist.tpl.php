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
                   </div>
    </div>
</body>