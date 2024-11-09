
fn main() {
  let mut v = vec![1,2,3];

  for i in 0..v.len() {
    println!("i = {}", v[i]);
    v.push(42);
  }
}