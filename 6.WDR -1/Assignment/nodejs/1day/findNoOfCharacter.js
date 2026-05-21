// Import the readline module for taking input
const readline = require("readline");

// Create interface for input/output
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let sentences = [];
let count = 0;

// Function to take three sentences as input
function getSentence() {
  if (count < 3) {
    rl.question(`Enter sentence ${count + 1}: `, (sentence) => {
      sentences.push(sentence);
      count++;
      getSentence();
    });
  } else {
    console.log("\nCharacter count in each sentence:");
    sentences.forEach((s, index) => {
      console.log(`Sentence ${index + 1}: ${s.length} characters`);
    });
    rl.close();
  }
}

getSentence();