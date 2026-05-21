// using Await and Async keyWord to change color this makes code small and easy
// handling error in promises
let h1 = document.querySelector("h1");

function colorChange(color, delay) {
  return new Promise((resolve, reject) => {
    let num = Math.floor(Math.random() *10 )+ 1;
    if(num< 4){
        reject( "Error Occour : number is less than 4");
    }
    setTimeout(() => {
      h1.style.color = color;
      resolve("color change ");
    },delay);
  });
}

async function changeColor(){
try{ await colorChange("blue",1000);
 await colorChange("green",1000);
 await colorChange("purple",1000);
 await colorChange("brown",1000);
 await colorChange("orange",1000);
 await colorChange("pink",1000);
 await colorChange("red",1000);
 await colorChange("darkBlue",1000);
 await colorChange("silver",1000);
} catch(error){
    console.error("failed color Change");
    console.log(error);

}

let a = 20 ;
console.log(a + 30);

}

changeColor();

