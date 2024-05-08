<a href="index.html"> <p align="center">STRONA GŁÓWNA</p></a>
<br>
<br>
<a href="baza.html"><p align="center"> DODAWANIE I WYSWIETLANIE</p></a>
<br>
<body bgcolor="#ADEAEA">
<?php

$lista = $_POST["lista"];
$polaczenie = new mysqli("localhost", "root", "", "MotoGP");   
if ($lista == "zawodnicy") {
    $wyswietl = $polaczenie->query("SELECT Zawodnicy.numer, Zawodnicy.imie, Zawodnicy.nazwisko, Zawodnicy.kraj, Druzyny.nazwa_druzyny, Zawodnicy.punkty FROM Zawodnicy INNER JOIN Druzyny ON Zawodnicy.druzyna = Druzyny.id_druzyny");
    echo "<table border='1' align='center'>";
    echo "<tr><th>Numer</th><th>Imie</th><th>Nazwisko</th><th>Kraj</th><th>Nazwa Drużyny</th><th>Punkty</th></tr>";
    while ($wiersz = $wyswietl->fetch_array()) {
        echo "<tr><td>" . $wiersz['numer'] . "</td><td>" . $wiersz['imie'] . "</td><td>" . $wiersz['nazwisko'] . "</td><td>" . $wiersz['kraj'] . "</td><td>" . $wiersz['nazwa_druzyny'] . "</td><td>" . $wiersz['punkty'] . "</td></tr>";
    }
    echo "</table>";
}


if($lista=="drużyny"){

    $wyswietl=$polaczenie->query("SELECT nazwa_druzyny, id_druzyny FROM druzyny");
        echo "<table border='1' align='center'>";
        echo "<tr><th>Nazwa drużyny</th><th>ID drużyny</th></tr>";
        
        while ($wiersz = $wyswietl->fetch_assoc()) {
            echo "<tr>";
            echo "<td>".$wiersz['nazwa_druzyny']."</td>";
            echo "<td>".$wiersz['id_druzyny']."</td>";
            echo "</tr>";
        }
        
        echo "</table>";

    }



?>
<br>
