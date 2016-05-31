Werken met sass

Ik heb de style.css file tot en met regel 466 al opgedeeld in sass files.

In sass files kan je duidelijk onderscheid maken tussen de delen die je styled.
Ipv overal met commentaar te werken.

Wil je voor een nieuw deel een file aanmaken heel simpel:
is een een basis stuk of een component (komt het vaker voor of slechts 1x)
Kies in welke map het thuis hoort (base of component) en maak daar een nieuwe file
aan met de naam : _naam.scss -> Altijd beginnen met _ en .scss gebruiken

Bewaar een kopie van het originele css bestand (just in case of )

Als alle css in omgezet in sass doe je het volgende:

ga met de command line naar de sass map

cd viago/drupal/sites/all/themes/ViaGo/assets/sass
en run volgend commando :

sass --watch styles.viago.scss:../css/style.css

Met dit commando zet die alle sass files om naar 1 css bestand en blijft hij ook
watchen , dus elke keer dat je in een sass file iets wijzigd en je saved schrijft
hij het weg in de css file .