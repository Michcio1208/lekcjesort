/*function bmi(){
  var waga=parseFloat(document.getElementById("waga").value)
  var wzrost=parseFloat(document.getElementById("wzrost").value)
 document.write("bmi to "+ waga/(wzrost*wzrost))
  }
  
  
function wycieczka(){
  var kasa=parseFloat(document.getElementById("kasa").value)
  var koszt=parseFloat(document.getElementById("koszt").value)
 if(kasa>=koszt){
   document.write("stac cie! Zostanie Ci "+(kasa-koszt))
 }
 else{
   document.write("nie stac cie! Brakuje ci "+(koszt-kasa))
 }
  }*/

function trojkat(){
  var od1=parseFloat(document.getElementById("1").value)
  var od2=parseFloat(document.getElementById("2").value)
  var od3=parseFloat(document.getElementById("3").value)
 if(od1+od2>od3 && od2+od3>od1 && od1+od3>od2){
   document.write("Chyba mozesz zrobic trojkata z  "+od1+" i "+od2+" i "+od3)
 }
  else{
    document.write("Chyba nie mozesz zrobic trojkata z  "+od1+" i "+od2+" i "+od3)
  }
  }