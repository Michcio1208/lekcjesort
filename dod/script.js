/*var tab=new Array()
let m=parseInt(prompt("podaj m: "))
for(let i=0;i<m;i++){
tab[i]=parseInt(prompt("podaj elem: "))
}
console.log(tab)*/
var tab=new Array()//zamiana
for(let i=0;i<10;i++)
  {
    tab.push(parseInt(prompt("Podaj element: ")))
  }
console.log(tab)
for(let i =0;i<5;i++)//bo dwa na raz sie zamienia
{ 
  let temp=tab[i]
  [tab[i],tab[10-i-1]]=[tab[10-i-1],tab[i]]
 //alternatywnie/lepiej [tab[i],tab[10-i-1]]=[tab[10-i-1],tab[i]]
 //alternatywnie tab[i]=tab[10-i-1] tab[10-i-1]=temp;
 
      }console.log(tab)