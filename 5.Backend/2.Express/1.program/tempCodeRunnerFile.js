app.get("*", (req  , res ) => {
    res.send("this path does not exist");
});