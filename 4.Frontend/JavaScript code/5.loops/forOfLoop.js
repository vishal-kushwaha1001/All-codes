// for-of-loop is used for string and array but does not use for object

let str = "vishalKushwaha";
 let length = 0;

 // syntax for(let val of strVal){ 
 // do some work }
 
  for(let ch of str ){
   console.log( "character is :",ch);
   length++ ;
  }
  console.log("length of string is : ",length);
