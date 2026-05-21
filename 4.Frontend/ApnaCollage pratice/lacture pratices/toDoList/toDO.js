let tasks = [];

let req ;

while (true) {
    req = prompt("please enter request");
    if (req == "quit") {
        console.log("you did quit ");
        break;
    }

    else if (req == "list"){
        console.log("list are -------");
        for (task of tasks) {
            console.log(task);
        }
    }
    else if(req == "add"){
        let task = prompt("please enter your task");
        tasks.push(task);
        console.log("task added ");


    }
    else if(req == "delete"){
        let idx = prompt("plese enter task index")
        tasks.splice(idx ,1);
        console.log("task has been deleted ");

    }
    else {
        console.log("you enter wrong request!");
        console.log("please enter correct reuest ");

        
    }
}