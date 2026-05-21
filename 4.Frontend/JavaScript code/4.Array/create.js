let fruits = [ "mango", "banana ", "apple"];
fruits[1] = "pineApple";
console.log(fruits);


// Array methods 
fruits.push("banana");
console.log(fruits);
// fruits.pop();

fruits.unshift("grapes");
console.log(fruits);
// fruits.shift(); 

let secondary = [ "papaya", "coconut", "BlueBerry", "cherry"];
 let primary = fruits.concat(secondary);
fruits.reverse();
 
primary.reverse();
console.log(primary);
// primary.slice(-2);