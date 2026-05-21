// using Await and Async keyWord to change color this makes code small and easy

let h1 = document.querySelector("h1");

function colorChange(color, delay) {
  return new Promise((resolve, reject) => {
    // let n = Math.floor(Math.random() *10 )+ 1;
    // if(num< 4){
    //     reject();
    // }
    setTimeout(() => {
      h1.style.color = color;
      resolve("color change ");
    },delay);
  });
}

async function changeColor(){
 await colorChange("blue",1000);
 await colorChange("green",1000);
 await colorChange("purple",1000);
 await colorChange("brown",1000);
 await colorChange("orange",1000);
 await colorChange("pink",1000);
 await colorChange("red",1000);
 await colorChange("darkBlue",1000);
 await colorChange("silver",1000);

}

changeColor();

