function funkcja(){
  let a=parseFloat(document.getElementById("pole").value)
if(a>=0 && a<=10){
  document.write("oke")}
 else{
    document.write("not oke")
  }
   }

function haslo(){
  let a=(document.getElementById("pole").value)
  let b=(document.getElementById("pole1").value)
  if(a=="login" && b=="password")
  {
  document.write("oke")
  }
  else if(a.length<=4)
  {
    document.write("tf2?")
  }
  else if(a=="" && b=="")
  {
    alert('tf?')
    document.write("tf?")
  }
 else{
    document.write("not oke")
  }
   }
function kolor(){ //giga sus dziala do dupy
  document.bgColor="blue"
}
  function kolor1(){ //giga sus dziala do dupy
  document.bgColor="green"}
  function kolor2(){ //giga sus dziala do dupy
  document.bgColor="red"}
  
