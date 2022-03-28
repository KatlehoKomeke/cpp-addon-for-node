
const { calc } = require('./build/Release/binding.node');

console.log("\n");
const cPlusPlus = "c++ 17"
console.time(cPlusPlus);
calc();
console.timeEnd(cPlusPlus);

console.log("\n");

const js_calc = ()=>{
    let count = 0;
    for (let i = 0; i < 9999999; i++) {
        count += i;
        console.log(count);
    }
    console.log("Sum of integers from 0 to "+ 9999999 +" in js = "+count);
    console.log("Javascript's largest safe integer: ",Number.MAX_SAFE_INTEGER);
    console.log("Javascript's largest possible number: ",Number.MAX_VALUE);
}

const node = "node 17";
console.time(node);
js_calc();
console.timeEnd(node);
console.log("\n");