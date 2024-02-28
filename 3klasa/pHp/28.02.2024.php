<?php
/*
//suma elementow kazdy pomniejszony o 5
$sum=0;
$tablica=array(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15);
foreach($tablica as $i){
$sum+=$i-5;


}
echo $sum;




//switch
$dana=$_GET['a'];
switch($dana){
case 1;
echo "uno";
break;
case 2;
echo "dos";
break;
case 3;
echo "tres";
break;
case 4; 
echo "quatro";
break;

}





//dni tygodnia
$dana=$_GET['a'];
switch($dana){
case 1;
echo "poniedzialek";
break;
case 2;
echo "wtorek";
break;
case 3;
echo "sroda";
break;
case 4; 
echo "czwartek";
break;
case 5; 
echo "piatek";
break;
case 6; 
echo "sobota";
break;
case 7; 
echo "niedziela";
break;
default;
echo "daj cos innego";
break;
}



//srednia 
$a=$_GET['a'];
$i=0;
$tab=explode(",",$a);
if (is_array($tab)){
foreach($tab as $ocena){
if(is_numeric($ocena) and $ocena>=1 and $ocena<=6){
$suma+=$ocena;
$i++;
}
}

}
if($i>0){
    echo "srednia ocen to ".($suma/$i);
}
else{
    echo "nie podano oceny";
}



//iloczyn liczb podzielnych przez
$a=$_GET['a'];
$i=0;
$iloczyn=1;
$tab=explode(";",$a);
if (is_array($tab)){
foreach($tab as $liczba){
if(is_numeric($liczba) and $liczba%6==0){
$iloczyn*=$liczba;
$i++;
}
}

}
if($i>0){
    echo "iloczyn liczb to ".($iloczyn);
}
else{
    echo "nie podano liczby";
}
*/


$a=$_GET['a'];
$i=0;
$iloczyn=1;
$tab=explode(";",$a);
if (is_array($tab)){
foreach($tab as $liczba){
if(is_numeric($liczba) and $liczba%2!=0){
echo $liczba."<br>";
$i++;
}
}

}






?>

<form action="28.02.2024.php" method="get">
<input type="text" name="a">
<input type="submit" value="wyslij">
</form>