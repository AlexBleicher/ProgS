use rand::Rng;

fn main() {
    let mut rng = rand::thread_rng();

    let mut array: [i32; 10] = [0; 10];
    for x in 0..10{
        array[x] = rng.gen_range(0..100);
    }
    println!("Array to sort: {:?}", array);
    println!("Sorted Array: {:?}", insertionsort(array));
}

fn insertionsort(mut array: [i32; 10]) -> [i32; 10] {
    for i in 1..array.len(){
        let elem = array[i];
        let mut j = i -1;
        while j>= 0usize && array[j]>elem {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = elem;
    }
    return array;
}