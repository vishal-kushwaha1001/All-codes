// forEach :- work as a loop for any function
// map :- create a secondary array  that function return
// every / some :- give true or false and work as logical OR/ logical AND
// filter :- filter a array and create a array then store filterd element
//reduce :- reduce array to a single value  and take two argument (accumalator, element)

let arr = [22,25,28,33,39,40,45,48,50];


// forEach
arr.forEach((e) =>{
    console.log(e);
});

// map
console.log("map function");
let squr = arr.map((e) => e*e);
console.log("square is " + squr);


// filter 
console.log("filter function");
let oddNum = arr.filter((e) =>(e%2)== 0);
console.log("odd number " + oddNum);

// reduce
let sum = arr.reduce((re,e) => re + e);
console.log("sum is :"  + sum);

let sumOfSqr = arr.reduce( (re , e) => re + (e *e));
console.log(sumOfSqr);