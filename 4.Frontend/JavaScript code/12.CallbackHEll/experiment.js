let h1 = document.querySelector("h1");


function generateColor(){
    let r = (Math.floor(Math.random() * 255));
    let g = (Math.floor(Math.random() * 255));
    let b = (Math.floor(Math.random() * 255));
    let color = `rgb(${r},${g},${b})`;
    return color;
}
function randomColor(){
    let red = Math.floor(Math.random()*255);
    let blue = Math.floor(Math.random()*255);
    let green = Math.floor(Math.random()*255);
    let color =`rgb(${red},${green},${blue})`;
    return color;
 }

function colorChange(clr ,delay) {
    setTimeout(() => {
        h1.style.color = `${clr}`;
    }, delay);
}

let i =1;
while(1){
    colorChange( randomColor() ,i*1000);
    i++;
    if(i == 50){ break;}


}