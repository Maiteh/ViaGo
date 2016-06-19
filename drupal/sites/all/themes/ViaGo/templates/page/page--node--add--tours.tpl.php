<?php

global $base_url;
$img_url = $base_url . '/sites/all/themes/ViaGo/assets/img';

module_load_include('inc', 'node', 'node.pages');
$form = node_add('tours');

?>

 <!--       INCLUDE NAVIGATION     -->
<?php 
    include_once dirname(__FILE__) . '/../includes/navigation.inc.php' ; 
?>


<body id="toevoegenRondleiding">
  <div id="basisinfoRondleiding">  
	<h1>Rondleiding toevoegen</h1>
    <?php print drupal_render($form); ?>
    <?php print drupal_render_children($form); ?>

  </div>

</body>


<?php 
    include_once dirname(__FILE__) . '/../includes/nieuwsbrief.inc.php' ; 
?>

<?php 
    include_once dirname(__FILE__) . '/../includes/footer.inc.php' ; 
?>