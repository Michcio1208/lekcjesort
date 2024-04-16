<?php
$ulica=$_POST["wulica"];

$polaczenie=new mysqli("localhost","root","","20.03.2024");
$wyswietl=$polaczenie->query("SELECT Gatunek, Ulica  FROM ulice INNER JOIN (drzewostan INNER JOIN  drzewa On drzewa.IDD=drzewostan.ID_drzewa.) On ulice.IDU=drzewostan.ID_ulicy");

while($wiersz=$wyswietl->fetch_array()){
    
    echo "ulica: ".$wiersz['Ulica'].$wiersz['Gatunek']."<br/>";
    }
    




?>