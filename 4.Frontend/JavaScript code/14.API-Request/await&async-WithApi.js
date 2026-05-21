let url ="https://catfact.ninja/fact";

async function getRequest(){

   try{ 
    let res1 = await fetch(url);
    let data1 = await res1.json();
    console.log( "data 1st :"+data1.fact);

    let res2 = await fetch(url);
    let data2 = await res2.json();
    console.log("data 2nd :"+data2.fact);
   } catch(e ){
    console.log("error :",e);
   }

   console.log("byy");
   
}

getRequest();