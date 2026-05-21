let h1 = document.querySelector("h1");

function colorChange(color, delay) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      h1.style.color = color;
      resolve("color change ");
    },delay);
  });
}

colorChange("red", 1000)
  .then((result) => {
    console.log("color change to blue");
    return colorChange("blue", 1000);
  })
  .then(() => {
    console.log("color change to green");
    return colorChange("green", 1000);
  })
  .then(() => {
    console.log("color change to pink");
    return colorChange("pink", 1000);
  })
  .then(() => {
    console.log("color change to yellow");
    return colorChange("yellow", 1000);
  })
  .then(() => {
    console.log("color change to  orange");
    return colorChange("rgb(240,88,97)", 1000);
  })
  .catch((err) => {
    console.log("failed");
  });
