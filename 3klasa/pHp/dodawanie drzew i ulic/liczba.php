<?php
$ulica=$_POST["ulica"];

$polaczenie=new mysqli("localhost","root","","20.03.2024");
$wyswietl=$polaczenie->query("SELECT drzewa.Gatunek, drzewostan.liczba_drzew  FROM drzewa INNER JOIN  (drzewostan INNER JOIN ulice On ulice.IDU=drzewostan.ID_ulicy)ON drzewa.IDD=drzewostan.ID_drzewa WHERE ulice.ulica='$ulica'");
echo "<table>";
echo "<tr><td>Gatunek</td><td> Liczba</td></tr>";


while($wiersz=$wyswietl->fetch_array())
{
    echo "<tr><td>".$wiersz['Gatunek']." ".$wiersz['liczba_drzew']."</td></tr>";
}

?>
