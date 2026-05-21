let start =["january", "july ", "march ", "august"];
// change to final form final = ["july", "june ", "july ", "august"]

start.shift();
let item = start.shift();
start.unshift("june");
start.unshift(item);
console.log(start);