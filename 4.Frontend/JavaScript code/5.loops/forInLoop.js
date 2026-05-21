// it is used for objects and arrays
//syntax:-
// for(let key in objVar){
// 
// do some work
//   }

const student = {
    name: "Vishal kushwaha",
    age :22,
    percentage : 69.9,
    isPass : true,

}

for(let key in student){
    console.log("key is :" , key ," And value is :",student[key]);
}