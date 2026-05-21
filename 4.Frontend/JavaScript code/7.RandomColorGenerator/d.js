let btn = document.getElementById('btn');
let para = document.querySelectorAll('p');
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
    for(paras of para){
        paras.style.color = "white";
    }

    btn.style.color = 'white';
    btn.style.backgroundColor =randomColor();

    let getColor1 = randomColor();
    box[0].style.backgroundColor = getColor1;
    para[0].innerText = getColor1;

    let getColor2 = randomColor();
    box[1].style.backgroundColor = getColor2;
    para[1].innerText = getColor2;

    let getColor3 = randomColor();
    box[2].style.backgroundColor = getColor3;
    para[2].innerText = getColor2;
    
 }
  





