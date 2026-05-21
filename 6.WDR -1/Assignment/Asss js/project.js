
let boxs = document.querySelectorAll(".boxesIn");
let btn = document.getElementById("btn");


function randomColor(){
    let red = Math.floor(Math.random()*255);
    let blue = Math.floor(Math.random()*255);
    let green = Math.floor(Math.random()*255);
    let color =`rgb(${red},${green},${blue})`;
    return color;
 }

function buttonclicked(){
    for( let box of boxs){
        let getColor= randomColor();
        box.style.backgroundColor = getColor;
        box.innerText = getColor;
        
        
    }
}

btn.addEventListener("click", buttonclicked);



