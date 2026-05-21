
const mongoose = require("mongoose");
const express = require ('express');
const path = require('path');
 const app = express();

 app.set("views" , path.join (__dirname , "views")); 
app.set("view engine" , "ejs");

main()
  .then(() => {
    console.log("connected successfully");
  })
  .catch((err) => console.log(err));

async function main() {
  await mongoose.connect("mongodb://127.0.0.1:27017/Whatsapp");
}


app.get("/",(req ,res)=>{
    res.send("root is working");

})

app.listen(8080 ,()=>{
    console.log ("app is listening");
})