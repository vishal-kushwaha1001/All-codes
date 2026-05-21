// create heading

let heading = document.createElement("h1");
heading.innerText = "Generate random color";
heading.style.textAlign = "center";

// create button
let btn = document.createElement("button");
btn.append('change color');
let body = document.querySelector('body');
body.prepend(heading);
body.prepend(btn);


let box = document.querySelector('div');

 function buttonclicked(){
    let getRandomColor = randomColor();
    box.style.backgroundColor= getRandomColor;
    btn.style.backgroundColor =randomColor();
    btn.style.color = 'white';
    heading.innerHTML =getRandomColor;
    box.style.color = 'white';
    // box.style.color = randomColor();

 }

 btn.addEventListener("click", buttonclicked);

 function randomColor(){
    let red = Math.floor(Math.random()*255);
    let blue = Math.floor(Math.random()*255);
    let green = Math.floor(Math.random()*255);
    let color =`rgb(${red},${green},${blue})`;
    return color;

 }