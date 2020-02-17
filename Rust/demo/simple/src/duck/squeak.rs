use crate::duck::interface::*;

pub struct Squeak{}

impl QuackBehavior for Squeak{
    fn quack(&self) {
        println!("Squeak")
    }
}