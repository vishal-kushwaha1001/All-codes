
// first question
const f = require("lodash");
const user = {
    name:"vishal",
    age:23,
    city:"delhi",
}
 const t = f.omit(user,['age']);  // for remove age
 const s = f.pick(user , ['city','name']); // for pick city and name

console.log(t);
console.log(s);



// second question
const y = [1,2,3,4,5,6,7,8,9,10];
const c = f.chunk(y,3); // divide y in 3 element in each portion
console.log(c);

// flatten array : combine sub arrays 
const f1 = [[1,2],[3,4],[5,6]];

const flate = f.flatten(f1);
console.log(flate);


// third question

const users = [ { name: 'Alice', age: 30 }, { name: 'Bob', age: 25 },
     { name: 'Charlie', age: 35}, { name: 'David', age: 20 } ];

     const r = f.filter(users, i=>i.age >25);
     // i is used to iterate and i.age is select age based on > 25
     // users is object 
     console.log(r);
     const l = f.sortBy(users , i => i.age);
     console.log(l);