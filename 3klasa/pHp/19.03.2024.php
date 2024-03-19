<?php
/*

$polaczenie=new mysqli("localhost","root","","14.02.2024");

$wyswietl=$polaczenie->query("SELECT aktor_id, imie, nazwisko FROM aktorzy");

while ($wiersz=$wyswietl->fetch_array()) {
    echo "<table border=1>";
    echo "<tr><td>ID</td><td>imie</td><td>nazwisko</td></tr>";
   echo "<tr><td>".$wiersz["aktor_id"]." "."</td><td>: ".$wiersz["imie"]."</td><td>".$wiersz["nazwisko"]."</td></tr>";
}
echo "</table>";
*/



$polaczenie=new mysqli("localhost","root","","14.02.2024");

$wyswietl=$polaczenie->query("SELECT rezyser, tytul, rok_produkcji FROM filmy");

while ($wiersz=$wyswietl->fetch_array()) {
    echo "<table border=1>";
    echo "<tr><td>tytul</td><td>rezyser</td><td>rok_produkcji</td></tr>";
   echo "<tr><td>".$wiersz["tytul"]." "."</td><td> ".$wiersz["rezyser"]."</td><td>".$wiersz["rok_produkcji"]."</td></tr>";
}
echo "</table>";









?>