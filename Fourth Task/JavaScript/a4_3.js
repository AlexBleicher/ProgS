function makeConverter(factor, offset){
    return function(input){
        return (offset+input)*factor;
    }
}

milesToKm = makeConverter(1.60936, 0.0);
poundsToKg = makeConverter(0.45460, 0.0);
fahrenheitToCelsius = makeConverter(0.5556, -32.0);

console.log(milesToKm(10));
console.log(poundsToKg(2.5));
console.log(fahrenheitToCelsius(98));