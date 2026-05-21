let btn = document.getElementById('btn');
let p = document.querySelectorAll('p');
let box = document.querySelectorAll('.box');

btn.addEventListener("click", buttonclicked);


function randomColor(){
    let red = Math.floor(Math.random()*255);
    let blue = Math.floor(Math.random()*255);
    let green = Math.floor(Math.random()*255);
    let color =`rgb(${red},${green},${blue})`;
    return color;
 }

function buttonclicked(){
    btn.style.color = 'white';
    btn.style.backgroundColor =randomColor();

    for( let paragraphs of p){
        paragraphs.style.color = "white";
    }

    for(let i = 0 ; i < 5; i++ ){
    let getColor = randomColor();
    box[i].style.backgroundColor = getColor;
    p[i].innerText = getColor;
    }
     
 }
  





