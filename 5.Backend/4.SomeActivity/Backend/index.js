const express = require("express");
const app = express();
const port = 8080;


app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.get("/register",(req ,res)=>{
    const {user , pass} = req.query;
    res.send(`conguratulation ${user} for registering  `);
});

app.post("/register",(req ,res)=>{
    const {user ,pass} = req.body;
    res.send(`conguratulation ${user} for registering...  `);
});


app.listen(port,()=>{
    console.log("server is started");
})