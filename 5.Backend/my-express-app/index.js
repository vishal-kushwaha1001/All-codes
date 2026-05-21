// app.js
const express = require("express");
const app = express();
const port = 8080;

// Middleware to handle requests
app.use((req, res) => {
  console.log("Request received");
  res.send("Hello from Express server!");
});

// Start the server
app.listen(port, () => {
  console.log(`✅ Server is running on http://localhost:${port}`);
});