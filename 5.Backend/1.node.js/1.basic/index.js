// let a = 30;
// let b= 40;
// console.log("sum : ", a+b);
// console.log(process.argv); 


 // process & process.argv
let args = process.argv;

for(let i = 2 ; i< args.length ; i++){
    console.log("welcome to My village ",args[i]);
}