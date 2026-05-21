// Qs1. Write a JavaScript program to check whether a string is blank or not.


let str = prompt("enter a string : ");
if(str == 0 ){
    console.log("string is empty :");

}
else {console.log ("string is not empty!")}


// Qs2. Write a JavaScript program to test whether the character at the given (character)
// index is lower case.


let str1 = prompt("enter a string : ");
let index = prompt("enter a index you want to check: ");
if(str1 == str1.toLowerCase(index)){
    console.log ("yes it is lower case");
}
else{
    console.log ("No, it is  not lower case");
    
}

//Qs3. Write a JavaScript program to check if an element exists in an array or not. 

let array = [22 ,33 ,555,33,55,55,55];

let key = prompt("inter a key :");
if(array.indexOf(key) != -1){
    console.log ("element is exist ");

}
else {
    console.log ("element does not exist ");
}