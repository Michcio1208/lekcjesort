<?php

/*$a=$_GET['liczba1'];
$b=$_GET['liczba2'];
$c=$_GET['liczba3'];*/
/*echo "klasa ".$tekst." ma ".$a.$b." osob";
echo '<br>';
if($a%2==0){
	echo "<h1>podzielna</h1>";
}
else {
echo "<h1>nie podzielna</h1>";
}*/

/*echo "pole deltodiu o przekatnych ".$a." i ".$b." jest rowne".(($a*$b)/2)*/


/*$delta=($b*$b)-(4*$a*$c);

if($delta ==0)
	echo "jedno";
else if($delta <0)
	echo "zero";
if($delta > 0)
	echo "dwa";*/




/*for($x=0;$x<100;$x++){
	if($x%2==0)
	echo"<h2>".$x."</h2>".'<br>';
*/	

$a=$_GET['liczba1'];
$b=$_GET['liczba2'];
for($x=($a+1);$x<$b;$x++){
	$sum+=$x;	
	
}
echo $sum;
?>
<form action="22.02.2024.php" method="get">
<input type="number" name="liczba1">
<input type="number" name="liczba2">
<input type="submit" value="wyslij">
</form>





