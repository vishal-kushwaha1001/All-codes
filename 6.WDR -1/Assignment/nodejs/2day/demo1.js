const f = require("fs");

// f.writeFileSync("./jss.text", "MCA 3RD SEM");
// f.writeFile("./jss2.text", "VISHAL KUMAR KUSHWAHA", (err)=>{});
 const r = f.readFileSync("./jss2.text" , "utf-8");

 console.log(r);