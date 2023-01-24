/*for(let i=1;i<11;i++){
  console.log(i)
}

let a=parseInt(prompt("podaj a: ")) //wypisywanie od do
let b=parseInt(prompt("podaj b: "))
for(let i=a;i<=b;i++){
  console.log(i)}

let n=parseInt(prompt("podaj n: "))//silnia
let fact=1
for(let i=1;i<=n;i++){
fact*=i;
}
console.log(fact)

let n=parseInt(prompt("podaj n: "))
let  s=0
for(let i=2;i<=n;i+=2){
  s+=i
  }
console.log(s)*/

let a=parseInt(prompt("podaj a(0;20): "))//min max i cos
let b=parseInt(prompt("podaj b(0;20): "))
let c=parseInt(prompt("podaj c(0;20): "))
let d=parseInt(prompt("podaj d(0;20): "))
let e=parseInt(prompt("podaj e(0;20): "))
let max=a;
let min=a;
if(min>=b){
  min=b;
}
if(min>=c){
  min=c;
}
if(min>=d){
  min=d;
}
if(min>=e){
  min=e;
}

console.log("min to: "+min)

if(max<=b){
  max=b;
}
if(max<=c){
  max=c;
}
if(max<=d){
  max=d;
}
if(max<=e){
  max=e;
}
console.log("max to: "+max)
let sum=a+b+c+d+e;
let sum2=sum-min-max
console.log("suma pomniejszona o min i max to: "+sum2)