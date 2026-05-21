let evenBox = document.querySelectorAll(".even");
let oddBox = document.querySelectorAll(".odd");
 let btn = document.querySelector('button');
 let box = document.querySelectorAll('.box');

function randomColor(){
   let red = Math.floor(Math.random()*255);
   let blue = Math.floor(Math.random()*255);
   let green = Math.floor(Math.random()*255);
   let color =`rgb(${red},${green},${blue})`;
   return color;
}

 function changeColorOdd(event){
    // evenBox.style.backgroundColor = 'rgb(80,231,215)';
    let getColor1 = randomColor();
    for(evenBoxs of evenBox){
        evenBoxs.style.backgroundColor = getColor1;
    }
 }

 function changColorEven(event){
    // evenBox.style.backgroundColor = 'rgb(241,202,166)';
    let getColor2 = randomColor();
    for(oddBoxs of oddBox){
        oddBoxs.style.backgroundColor = getColor2;
    }
 }

 btn.addEventListener("click",changeColorOdd);
 btn.addEventListener("click",changColorEven);

// function changeColor( event){
//     let getColor = randomColor();
//     for(boxes of box){
//       boxes.style.backgroundColor = getColor;
//     }
// }
//  btn.addEventListener("click", changeColor );

 

    