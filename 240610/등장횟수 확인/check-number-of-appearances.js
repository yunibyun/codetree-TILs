let evenCnt = 0;

arr.forEach(item => {
    if((parseInt(item)) % 2 === 0) {
        evenCnt++;
    }
})

console.log(evenCnt)