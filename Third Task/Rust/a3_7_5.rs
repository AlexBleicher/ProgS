
fn main() {
  let y: &i32;

  {
    let x = 5;
    y = &x;
  }
  y = &5;
  print!("x = {}", y);
}
