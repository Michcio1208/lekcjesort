//document.write("le bruh jam")//wyswietl na stronie

/*var a=parseInt(prompt("podaj liczbe: ")) //biale pod konsola to strona 
if(a>100){
  document.write("<p>liczba wieksza od 100</p>")                    
      }
else{
  document.write("<p>liczba nie wieksza od 100</p>")
}


var tab=[4,6,7,8,5,4,2321,858] //podpisuje tab[i]
for(let i=0;i<tab.length;i++){
  document.write(`<p>tab[${i}] to ${tab[i]}</p>`)
}


let k=parseInt(prompt("podaj liczbe k: "))
let l=parseInt(prompt("podaj liczbe l: "))
function mnozenie(a,b){  //funkcja 
  return a*b
}
let c=mnozenie(k,l)
document.write(" mnozenie to "+c)

function dodawanie(a,b){  //funkcja 
  return a+b
}

let d=dodawanie(k,l)
document.write(" dodawanie to "+d)

function odejmowanie(a,b){  //funkcja 
  return a-b
}
let e=odejmowanie(k,l)
document.write(" odejmowanie to "+e)

function dzieleni(a,b){  //funkcja 
  if(b==0){
    return "zle"
  }
  else{
    return a/b
  } 
    }
let f=dzieleni(k,l)
document.write(" dzielenie to "+f)*/


/*function wypisz(){  //html **
  var liczba=document.getElementById("pole").value;
  document.write(liczba)
}
*/
function wypisz(){  //html ***
  var liczba=parseInt(document.getElementById("pole").value)
   var liczba2=parseInt(document.getElementById("pole2").value)
  document.write(liczba+" ")
  document.write(liczba2)
}