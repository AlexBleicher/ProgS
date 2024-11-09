
fn main() {
  let mut x = 1;

  let y = &mut x;
  *y += 1;

  print!("y = {}", y);
  print!("x = {}", x);
}
