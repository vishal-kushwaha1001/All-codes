let navBar = document.querySelector(".navbar");
let searchBar = document.querySelector(".fa-magnifying-glass");



searchBar.addEventListener("click" , ()=>{
    navBar.classList.toggle("showInput");
    if(navBar.classList.contains("showInput")){
        searchBar.classList.replace("fa-magnifying-glass", "fa-xmark");
    }
    else 
        searchBar.classList.replace( "fa-xmark","fa-magnifying-glass");
})

let openMenuBtn = document.querySelector(".navbar .bx-list");
let closeMenuBtn = document.querySelector(".nav-links .bx-x");
let navLink = document.querySelector(".nav-links");

openMenuBtn.addEventListener("click", ()=>{
    navLink.style.left="0";
});

closeMenuBtn.addEventListener("click", ()=>{
    navLink.style.left="-100%";
});

// sidemenu bar

let htmlCssArrow = document.querySelector(".html-css-arrow")

htmlCssArrow.addEventListener("click", ()=>{
    navLink.classList.toggle("show1");

});

let jsArrow = document.querySelector(".js-arrow")

jsArrow.addEventListener("click", ()=>{
    navLink.classList.toggle("show2");

})
let moreArrow = document.querySelector(".more-arrow")

moreArrow.addEventListener("click", ()=>{
    navLink.classList.toggle("show3");

})