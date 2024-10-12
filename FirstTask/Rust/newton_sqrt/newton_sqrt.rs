fn main() {
    let mut number = String::new();
    println!("Please enter a number to calculate the square root from: ");
    let b1 = std::io::stdin().read_line(&mut number).unwrap();

    let mut first = number.trim().parse::<f32>().unwrap();
    let mut latest = first;
    let mut i = 1i32;
    loop{
        if i>1000 || (latest*latest - first) < 0.0001{
            break;
        }
        latest = newton_sqrt(latest, first);
    }
    println!("The square root of {} is (approximately) {}", first, latest);
}

fn newton_sqrt(number: f32, first: f32) -> f32{
    if number < 0.0 || first < 0.0
    {
        println!("Error! Number cannot be below zero!");
        return -1f32;
    }
    0.5 * (number + first/number)
}