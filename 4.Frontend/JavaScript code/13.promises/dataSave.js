function saveDataBs(data) {
  return new Promise((resolve, reject) => {
    let netSpeed = Math.floor(Math.random()*10) + 1;
    console.log("net speed " + netSpeed);
    if (netSpeed > 4) {
      resolve("Success : save to data base ");
    } else {
      reject("failed :  Internet slow ");
    }
  });
}

saveDataBs("vishal")
  .then(() => {
    console.log("data1 saved" );
    return saveDataBs("Ayush");
  })
  .then(() => {
    console.log("data2 saved");
    return saveDataBs("Anant");
  })
  .then(() => {
    console.log("data3 saved");
    return saveDataBs("Vinayak");
  })
  .then(() => {
    console.log("data4 saved");
  })
  .catch(() => {
    console.log("data rejected due slow internet");
  });
