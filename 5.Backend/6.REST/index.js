const express = require("express");
const ejs = require("ejs");
const path = require("path");
const app = express();
const port = 8080;

app.use(express.urlencoded({ extended: true }));
app.set("views", path.join(__dirname, "views"));
app.set("view Engine", "ejs");
app.use(express.static(path.join(__dirname, "public")));

let posts = [
  { username: "vishal", content: "I love coding." },
  { username: "rahul", content: "hard work pays off." },
  { username: "sachin", content: "never give up." },
];

app.get("/posts", (req, res) => {
  res.render("index.ejs", { posts: posts });
});
app.get("/posts/new", (req, res) => {
  res.render("new.ejs");


});

app.post("/posts", (req, res) => {
  const { username, content } = req.body;
  posts.push({ username: username, content: content });
    res.redirect("/posts");
  
});

app.listen(port, (req, res) => {
  console.log("server is running");
});
