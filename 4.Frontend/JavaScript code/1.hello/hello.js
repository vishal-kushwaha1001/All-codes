console.log("hello world !");
//  object 
const costomer = {
    userName: "vishal kumar kushwaha ",
    costomerid : 1001,
    age: 21,
    purchaseAmount :2999,
}
// 1st method to access its attributes
console.log(costomer);
console.log(costomer.userName);
console.log(costomer.age,costomer.costomerid,costomer.purchaseAmount);

// 2nd method to acess its attribute
console.log(costomer["userName"]);

// console.table is used to print data in form of table
console.table(costomer);