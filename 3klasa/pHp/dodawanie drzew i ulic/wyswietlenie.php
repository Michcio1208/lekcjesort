<?php

$lista=$_POST["lista"];
$polaczenie=new mysqli("localhost","root","","20.03.2024");
if($lista=="drzewo"){

$wyswietl=$polaczenie->query("SELECT Gatunek, Rodzaj FROM drzewa");
while($wiersz=$wyswietl->fetch_array()){

echo "Gatunek: ".$wiersz['Gatunek']." Rodzaj: ".$wiersz['Rodzaj']."<br/>";
}
}

if($lista=="ulice"){

    $wyswietl=$polaczenie->query("SELECT Ulica FROM ulice");
    while($wiersz=$wyswietl->fetch_array()){
    
    echo "ulica: ".$wiersz['Ulica']."<br/>";
    }
    }





?>
<a href="index.html"> wroc</a>