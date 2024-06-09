const fs = require("fs");
let input = fs.readFileSync(0).toString();
let arr = input.split("\n")

let evenCnt = 0;

arr.forEach(item => {
    if((parseInt(item)) % 2 === 0) {
        evenCnt++;
    }
})

console.log(evenCnt)