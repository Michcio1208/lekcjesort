/*const regex=/^([a-z]|[A-Z])*(x|y)$/
const wyraz="Grgfjidejidsqjisdjix"
const wyraz1="grgfjidejidsqjisdji"
const a=regex.test(wyraz) 
const b=regex.test(wyraz1)
console.log(a)
console.log(b)

const regex=/^([a-z]|[A-Z])*((a|b)|(A|B))([a-z]|[A-Z])*$/
const wyraz="fueheja"
const wyraz1="gjgjgjhB"
const a=regex.test(wyraz) 
const b=regex.test(wyraz1)
console.log(a)
console.log(b)


const regex=/^(([a-f]|[A-F])[0-9]){24}$/
const wyraz="abf324324123123123123132"
const wyraz1="grgfjidejidsqjisdji"
const a=regex.test(wyraz) 
const b=regex.test(wyraz1)
console.log(a)
console.log(b)


const regex=/^[0-9]{2}\.[0-9]{2}\.[0-9]{4}$/
const wyraz="09.03.2020"
const wyraz1="grgfjidejidsqjisdji"
const a=regex.test(wyraz) 
const b=regex.test(wyraz1)
console.log(a)
console.log(b)
*/

function regex(){
  const name=document.getElementById("name").value
const imie=/^[a-zA-Z]+$/
const test=imie.test(name)
document.write(test ? "ok" : "nie ok ")
}