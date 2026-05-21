const student = {
    name:"vishal kushwaha",
    rollNO: 62,
    percentage : "81 %",

};

console.log(student.name);
console.log(student.rollNO);
console.log(student["percentage"]);

// add keys
 student.gender = "male";
student.branch = "MCA";

 // delete keys
delete student.percentage;
 console.log(student);