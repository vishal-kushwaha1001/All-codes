let n = document.querySelector("input");
let btn = document.querySelector("button");
let form = document.querySelector("form");



n.addEventListener("keypress", (event) => {
    console.log("Name of key is :" + event.key);
    console.log("code of key is " + event.code);
    console.log("key was prassed");
    // console.log(event);
})

n.addEventListener("blur", (event) => {
    // n.style.textTransform = "uppercase"
    n.value = n.value.toUpperCase();
    console.log(event);
});

form.addEventListener("submit", (event)=>{
    alert("Now you can generate color !");
    event.preventDefault();
})




