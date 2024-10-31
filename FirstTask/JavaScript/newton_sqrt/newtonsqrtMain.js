import { newton_sqrt } from "./newtonsqrtAlgo.js";

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.question('Give a number, that you want to know the square root for: ', number => {
    let res = newton_sqrt(number);
    console.log('The square root of your number is (approximatly) ' + res);
    rl.close();
})