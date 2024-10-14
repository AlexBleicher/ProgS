import {insertionsort} from "./insertionsortAlgo.js"
const array = [];
for (let i = 0; i < 10; i++) {
    array.push(Math.floor(Math.random() * 100));
}
console.log("Array to sort: ", array);
let sortedarray = insertionsort(array);
console.log("Sorted Array: ", sortedarray)

insertionsort()