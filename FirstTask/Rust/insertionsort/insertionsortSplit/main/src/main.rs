use rand::Rng;
mod algo;

fn main() {
    let mut rng = rand::thread_rng();

    let mut array: [i32; 10] = [0; 10];
    for x in 0..10{
        array[x] = rng.gen_range(0..100);
    }
    println!("Array to sort: {:?}", array);
    println!("Sorted Array: {:?}", algo::insertionsort(array));
}
