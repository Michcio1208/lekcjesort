<?php
$numer=$_POST["numer"];
$imie=$_POST["imie"];
$nazwisko=$_POST["nazwisko"];
$punkty=$_POST["punkty"];
$kraj=$_POST["kraj"];
$druzyna=$_POST["id_druzyna"];
$polaczenie=new mysqli("localhost","root","","MotoGP");
$polaczenie->query("INSERT INTO Zawodnicy(numer,imie,nazwisko,punkty,kraj,druzyna) VALUES ('$numer','$imie','$nazwisko','$punkty','$kraj','$druzyna')");
$polaczenie->close();

echo "Dodano zawodnika $imie $nazwisko z numerem $numer z kraju $kraj majacego $punkty punktow, jezdzacego dla drużyny $druzyna <br/>"
?>
<a href="index.html" >wroc </a>
<body bgcolor="#ADEAEA"></body>