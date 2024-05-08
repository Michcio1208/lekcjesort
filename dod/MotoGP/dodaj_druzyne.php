<?php

$druzyna=$_POST["druzyna"];
$polaczenie=new mysqli("localhost","root","","MotoGP");
$polaczenie->query("INSERT INTO druzyny(nazwa_druzyny) VALUES ('$druzyna')");
$polaczenie->close();
echo "Dodano drużyne $druzyna <br/>"; ?>
<a href="baza.html" >wroć </a>
<body bgcolor="#ADEAEA"></body>













