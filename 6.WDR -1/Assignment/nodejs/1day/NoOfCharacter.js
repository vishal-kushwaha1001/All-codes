// // without take input from user
// // Define three sentences
// const sentence1 = "Node.js is a JavaScript runtime environment.";
// const sentence2 = "It allows you to run JavaScript on the server side.";
// const sentence3 = "Learning Node.js is fun and powerful!";

// // Store sentences in an array
// const sentences = [sentence1, sentence2, sentence3];

// // Print the number of characters in each sentence
// console.log("Character count in each sentence:\n");

// sentences.forEach((sentence, index) => {
//   console.log(`Sentence ${index + 1}: ${sentence.length} characters`);clearImmediate
// });



// Define three sentences
const sentence1 = "Node.js is a JavaScript runtime environment.";
const sentence2 = "It allows you to run JavaScript on the server side.";
const sentence3 = "Learning Node.js is fun and powerful!";

// Store sentences in an array
const sentences = [sentence1, sentence2, sentence3];

// Print the number of characters in each sentence (excluding spaces)
console.log("Character count in each sentence (without spaces):\n");

sentences.forEach((sentence, index) => {
  // Remove all spaces before counting
  const countWithoutSpaces = sentence.replace(/\s/g, '').length; 
  console.log(`Sentence ${index + 1}: ${countWithoutSpaces} characters`);
});