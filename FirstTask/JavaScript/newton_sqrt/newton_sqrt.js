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

function newton_sqrt(number){
    let first = number;
    let latest = number;
    i = 1;
    while (i < 1000 && (latest * latest - first) > 0.0001) {
        latest = 0.5 * (latest + first / latest);
        i++;
    }
    return latest;
}