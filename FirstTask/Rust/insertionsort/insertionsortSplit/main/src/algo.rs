pub(crate) fn insertionsort(mut array: [i32; 10]) -> [i32; 10] {
    for i in 1..array.len() as i32{
        let elem = array[i as usize];
        let mut j = i -1;
        while j>= 0 && array[j as usize]>elem {
            array[(j+1) as usize] = array[j as usize];
            j = j-1;
        }
        array[(j+1) as usize] = elem;
    }
    array
}