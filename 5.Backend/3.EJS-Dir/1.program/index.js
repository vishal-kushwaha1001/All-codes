const express = require("express");
const app = express();
const path = require("path");
const port = 8080;

app.use(express.static(path.join(__dirname ,"public/css")));
app.use(express.static(path.join(__dirname ,"public/js")));


app.set("view Engine", "views");
app.set("views", path.join(__dirname, "/views"));

app.get("/home", (req, res) => {
  res.send("<h1> Home </>");
});

app.get("/ig/:username", (req, res) => {
  let {username} = req.params;
  const instaData = require("./data.json");
  
  let userdata = instaData[username];
  if(userdata){
     res.render("instagram.ejs",{data : userdata});
    //  console.log(userdata.posts);
  }
  else{
    res.render("error.ejs");
  }
 
 
});

app.get("/home/rol-dice", (req, res) => {
  const randomNum = Math.floor(Math.random() * 6) +1;
  res.render("roleDice.ejs",{data : randomNum });
});

app.listen(port, () => {
  console.log("Server is started ...");
});
