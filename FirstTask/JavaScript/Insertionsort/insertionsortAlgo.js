function insertionsort(arr){
    for(let i=1; i<arr.length; i++){
        let elem = arr[i];
        let j = i-1;
        while(j>=0 && arr[j]>elem){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=elem;
    }
    return arr;
}

export {insertionsort}