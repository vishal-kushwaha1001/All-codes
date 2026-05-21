const express = require("express");

const app = express();
const port = 8080;

app.listen(port, () => {
  console.log(`App is running on port ${port}`);
});

app.get("/", (req, res) => {
  res.send("You connected to root path");
});

app.get("/orange", (req, res) => {
  res.send("You connected to orange path");
});

app.get("/apple", (req, res) => {
  res.send("You connected to apple path");
});

app.get("/search", (req, res) => {
  res.send("You connected to search path");
});

app.use( (req, res) => {
  res.send("This path does not exist");
});


// app.use((req ,res)=>{
//     console.log("request recived");
//     res.send([{
//         name :"vishal",
//         age:23,
//     }, {
//         name:"Ayush",
//         age:24,
//         rlNO:17
//     }]);
// });