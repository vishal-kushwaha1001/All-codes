// Question 1: Write a Node.js program to read the contents of a file named input.txt using the
// fs.readFile method. Implement a callback function to log the file's content if it is read successfully
// or log an error if the file cannot be read.

// Import the 'fs' (File System) module
const fs = require('fs');

// Read the contents of 'input.txt' asynchronously
fs.writeFile("./input.txt", "hello jss !",(err)=>{})
fs.readFile('input.txt', 'utf8', (err, data) => {
  // Check if an error occurred
  if (err) {
    console.error('Error reading the file:', err.message);
    return;
  }

  console.log(data);
});


