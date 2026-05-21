// Create a game where you start any random game number .
// Ask the user to keep gussing the game number until the user enters correct value.

let gussValue = "49";
let currValue = prompt("Guss a number which is correct :");
 while( currValue != gussValue){
    currValue= prompt("you entered wrong number , Again guss a number :");

 }
 console.log("Congratulation!. you guss correct number");