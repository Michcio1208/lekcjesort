/*let n=parseInt(prompt("podaj n: "))
let sum=0
for(let i=1;i<=n;i++){
  sum+= i*Math.pow(10,n-i)
}
console.log(sum)


let h=(prompt("podaj h: "))//haslo
let g;
while(g!=h){
   g=(prompt("podaj g: "))
}
console.log("ok")


var tablica=[1,2,4,5,7,8]//tablica
console.log(tablica[0])
console.log(tablica[2])
console.log(tablica[1])


var t=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20//wyswietlanie od tylu
for(let i=19;i>=0;i--){
  console.log(t[i])
}



var tab=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
for(let i=0;i<tab.length;i++){
  console.log(tab[i])
}
tab.push(40)//doadaje element"40"
for(let i=0;i<tab.length;i++){
  console.log(tab[i])
}


var tab=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
for(let i=0;i<tab.length;i++){
  if(i%2==0){
    console.log(tab[i])
  }
    
}
*/


let p=1
var tab=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
for(let i=0;i<tab.length;i++){
  if(tab[i]%3==0){
    p*=tab[i]
  }  
}console.log(p)