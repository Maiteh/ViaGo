<?php

global $base_url;
$img_url = $base_url . '/sites/all/themes/ViaGo/assets/img';

module_load_include('inc', 'node', 'node.pages');
$form = node_add('tours');

?>


 <nav>
        <div class="container">
            <div class="row">
                <div class="col-xs-5 header-logo">
                    <a href="<?php print $base_url . '/' . drupal_get_path_alias('node');?>"><img src="<?php print $img_url . '/logo.png'?>" alt="" class="logo"></a>
                    <form>
                        <input id="zoekbalk" value="Zoek rondleiding, stad of gids" > </input>
                    </form>
                </div>                          
                    <ul>
                       <?php print render($page['header']); ?>
                    </ul>
            </div>
        </div>
    </nav>
<div id="subnav"><?php print render($page['highlighted']); ?></div>


<body id="toevoegenRondleiding">
  <div id="basisinfoRondleiding">  
	<h1>Rondleiding toevoegen</h1>
    <?php print drupal_render($form); ?>
    <?php print drupal_render_children($form); ?>

  </div>

</body>



    <section id="nieuwsbrief">
        <div class="container">
            <div id="subscribe">
                <div>
                     <?php print t('<label for="optin-email">Schrijf je in om up-to-date te blijven!</label>') ?>
                </div>
                <div class="nieuwsbriefwrapper">
                    <div class="col-sm-12">
                        <input type="text" name="optin-email" id="optin-email" placeholder="Uw email adres">
                        <div class="nieuwsbriefmargin"></div>
                        <input type="submit" value="Verzend">
                    </div>
                </div>
            </div>
        </div>
    </section>   


<footer class="text-center">
        <div class="footer-above">
            <div class="container">
                <div class="row">
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Contact</h3></br></br>') ?>
                        <?php print t('<p>Lorem</p></br>') ?>
                        <?php print t('<p>Ipsum</p></br>') ?>
                        <?php print t('<p>Whatsoever</p>') ?>

                    </div>
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Zoek</h3></br></br>') ?>
                        <?php print t('<p>Rondleiding</p></br>') ?>
                        <?php print t('<p>Gidsen</p></br>') ?>
  
                    </div>
                    <div class="footer-col col-md-4">
                        <?php print t('<h3>Volg ViaGo</h3></br></br>') ?>
                        <?php print t('<p>Facebook</p></br>') ?>
                        <?php print t('<p>Twitter</p> </br>') ?>
                        <?php print t('<p>And so on.</p> </br>') ?>
                    </div>
                </div>
            </div>
        </div>

    </footer>