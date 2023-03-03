/*
//regex.test sprawdza czy spelnia warunki

const string="1234456789"
//pierwszy sposob
const regex=/^[0-9]{9}$/
const b =regex.test(string)

console.log(b)



const string="rok"
const string1="nie"
const string2="wola"

const rakrokryk=/^r.k$/
const ola=/^.ola$/

const a=rakrokryk.test(string)
const b=rakrokryk.test(string1)
const c=ola.test(string2)


console.log(a)
console.log(b)
console.log(c)



const kot="kot"
const kot1="kt"
const koot=/^ko*t$/ //
const a=koot.test(kot)
const b=koot.test(kot1)
console.log(a)
console.log(b)



const postcode=/^[0-9]{2}\-[0-9]{3}$/

const kod="77-444"
const kod1="444-22"

const a=postcode.test(kod)
const b=postcode.test(kod1)

console.log(a)
console.log(b)



const ip=/^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$/
const ip1="323.454.545.545"
const ip2="323.454.545545"
const a=ip.test(ip1)
const b=ip.test(ip2)
console.log(a)
console.log(b)




const string="1234456789"
const string1="fizyk"
const string2="fizycy"
const string3="abrrr" 
const fizyk=/^fizy(k|cy)$/
const abr=/^(a|b|r)*$/
const a =fizyk.test(string)
const b =fizyk.test(string1)
const c =fizyk.test(string2)
const e =abr.test(string2)
const d =abr.test(string3)
console.log(a)
console.log(b)
console.log(c)
console.log(d)
console.log(e)
*/

const email=/^[a-z]+@[a-z]+\.[a-z]{2,}$/
const mail="asfdiajfaidasa@gmail.com"
const mail1="asfdiajfaidasa@gmaicom"
const a=email.test(mail)
const b=email.test(mail1)
console.log(a)
console.log(b)