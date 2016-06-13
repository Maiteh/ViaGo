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
                        <div id="NaamToerist">
                        <h1> <?php  print $user->name; ?> </h1>

                        </div>                    
                        
                </div>
            </div>
                <div class="row">
                    <div class="col-xs-6">
                    </div>
                    <div class="col-xs-6">
                        <div id="gegevens">
                        <h2>Accountgegevens </h2> 
                        <p><strong>Profilenaam:</strong> <?php  print $user->name; ?> </p>
                        <p><strong>E-mailadres:</strong> <?php print $user->mail; ?></p>
                        <p><strong>Wachtwoord:</strong> ****** </p>
                        </div>
                        <div id="favorieten">
                        <h2>Mijn favoriete rondleidingen </h2> 
                        </div>
                        
            </div>
                        


            </div>


        </div>

    </div>
</body>