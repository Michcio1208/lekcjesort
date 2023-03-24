/*const image=/^img\-[0-9]{3}\.((jpg)|(gif)|(png)|(tiff))$/
const test=image.test(name)
console.log(test)
*/

/*
\d - kazdy znak bedacy cyfra
\D - kazdy znak nie bedacy cyfra
\w - kazdy znak bedacy litera
\W - kazdy znak nie bedacy litera
\s - znak spacji lub enter
\S - znak nie baedacy spacja lub enter
*/

/*
function cena(){
const price=/^(\d)+(\s)?(PLN)|(EUR)$/
a=document.getElementById("name").value
b=document.getElementById("name1").value
const test=price.test(a)
const test1=price.test(b)
console.log(test)
console.log(test1)
}
*/



const real=/^(\d)+(\.)?(\d)*$/

const para=/^<p>.*<\/p>$/

const http=/^http(s)?\/\/((\w)|(\d))+\.(\w){2,}$/
const sci=/^(\d)\.(\d){1,5}(E|e)\+(\d){2}$/
const cos=/^\$(\w)+$/