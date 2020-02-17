mod duck;
use duck::*;

fn main() {
    let duck: MallardDuck = Duck::new();
    duck.fly();
    duck.no_fly();
}
