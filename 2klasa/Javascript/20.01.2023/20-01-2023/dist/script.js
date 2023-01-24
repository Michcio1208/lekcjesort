/*var tab=new Array(10) //wpisywanie do tablicy1

for(let i=0;i<10;i++)
  {
    tab.push(parseInt(prompt("Podaj element: ")))
  }
console.log(tab)
 

var tab=new Array()//zamiana
for(let i=0;i<10;i++)
  {
    tab.push(parseInt(prompt("Podaj element: ")))
  }
console.log(tab)
for(let i =0;i<5;i++)//bo dwa na raz sie zamienia
{ 
  let temp=tab[i]
 tab[i]=tab[10-i-1]
 tab[10-i-1]=temp;
 //alternatywnie/lepiej [tab[i],tab[10-i-1]]=[tab[10-i-1],tab[i]]
      }console.log(tab)
      

var tab=new Array() //do czwartej pot
for(let i=0;i<10;i++)
  {
    tab.push(parseInt(prompt("Podaj element: ")))
  }console.log(tab)
for(let i=0;i<10;i++)
{
  tab[i]=Math.pow(tab[i],4)
}console.log(tab)


var tab=new Array() //wszystkie liczby zamienic na nieparzyste
for(let i=0;i<10;i++)
  {
    tab.push(parseInt(prompt("Podaj element: ")))
  }console.log(tab)
for(let i=0;i<10;i++)
{
  if(tab[i]%2==0)
    {
tab[i]=tab[i]-1
    }
  else
  tab[i]=tab[i]-2
}
console.log(tab)*/

var tab=new Array()//ciag fibonacciego (suma dwoch poprzednic to nastepny element)
tab.push(0)
tab.push(1)
for(let i=2;i<10;i++){
  tab[i]=tab[i-1]+tab[i-2]
}console.log(tab)