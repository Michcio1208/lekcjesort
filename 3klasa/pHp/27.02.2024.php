<?php

/* //BMI

$a=$_GET['waga'];
$b=$_GET['wzrost'];

if(isset($_GET['waga']) and isset($_GET['wzrost'])){
$BMI=$a/($b*$b);
    echo "twoje bmi to ".$BMI;
}
else {
    echo "podaj dane w kg i cm";
}


//liczba z przedzialu
$a=$_GET['liczba1'];
$b=$_GET['liczba2'];

for($i=$a+1;$i<$b;$i++){
echo $i."<br>";
}




//a do potegi b
$a=$_GET['liczba1'];
$b=$_GET['liczba2'];

$c=1;
for($i=1;$i<=$b;$i++){
$c=$c*$a;
}
echo $c;
*/

//tablica
$TABLICA=array(1,2,3,4,5,6,7,8);

//echo $TABLICA[0]."<br>";
//echo $TABLICA[3]."<br>";

/*
//wypisuje wszystko 
foreach($TABLICA as $x){
    echo $x."<br>";
}


//wypisuje wszystkie nieparzyste
foreach($TABLICA as $x){
   if($x%2!=0)
    echo $x."<br>";
}
*/
$c=0;
$kolor=array("zielony","niebieski","czerwony","brazowy","czarny");
foreach($kolor as $x){
    if($x=="czarny"){
        $c=$c+1;
    }
    
}
if($c=1){
      echo "jest";  
}
else{
    echo "nie ma";
}

?>


<form action="27.02.2024.php" method="get">
<input type="text" name="liczba1">
<input type="text" name="liczba2">
<input type="submit" value="wyslij">
</form>















