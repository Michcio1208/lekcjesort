<?php
/*
//polaczenie z baza danych; miejsce; uzytkownik;haslo;nazwa bazy danych
$polaczenie=new mysqli("localhost","root","","13.02.2024");

$wyswietl=$polaczenie->query("SELECT imie, nazwisko FROM studenci_dane");

while ($wiersz=$wyswietl->fetch_array()) {
   echo "Imie: ".$wiersz["imie"]." "."nazwisko: ".$wiersz["nazwisko"]."</br>";
}



$polaczenie=new mysqli("localhost","root","","14.02.2024");

$wyswietl=$polaczenie->query("SELECT imie, nazwisko FROM aktorzy");

while ($wiersz=$wyswietl->fetch_array()) {
   echo "Imie: ".$wiersz["imie"]." "."nazwisko: ".$wiersz["nazwisko"]."</br>";
}*/


$polaczenie=new mysqli("localhost","root","","14.02.2024");

$wyswietl=$polaczenie->query("SELECT tytul, rezyser, rok_produkcji FROM filmy");

while ($wiersz=$wyswietl->fetch_array()) {
   echo "tytul: ".$wiersz["tytul"]." "."rezyser: ".$wiersz["rezyser"]." rok produkcji: ".$wiersz["rok_produkcji"]."</br>";
}

















?>

