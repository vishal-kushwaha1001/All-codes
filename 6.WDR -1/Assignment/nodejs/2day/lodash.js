// lodash module
const f = require("lodash");
const user = {
    name:"vishal",
    age:23,
    city:"delhi",
}
const userWithoutage = f.omit(user, ['age']);
console.log(userWithoutage);