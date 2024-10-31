const array = [];
for(let i=0; i<10; i++){
    array.push(Math.floor(Math.random() * 100));
}
console.log("Array to sort: ", array);
let sortedarray = insertionsort(array);
console.log("Sorted Array: ", sortedarray)
function insertionsort(arr){
    for(let i=1; i<arr.length; i++){
        elem = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>elem){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=elem;
    }
    return arr;
}