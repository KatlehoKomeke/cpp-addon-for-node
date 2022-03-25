
const { calc } = require('./build/Release/binding.node');

console.log("\n");
const cPlusPlus = "c++ 17"
console.time(cPlusPlus);
calc();
console.timeEnd(cPlusPlus);

console.log("\n");

const js_calc = ()=>{
    let count = 0;
    for (let i = 0; i < 900000000; i++) {
        count += i;
    }
    console.log("Sum of integers from 0 to "+900000000+" in js = "+count);
}

const node = "node 17";
console.time(node);
js_calc();
console.timeEnd(node);
console.log("\n");