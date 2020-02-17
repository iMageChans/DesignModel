use crate::duck::interface::*;

pub struct Quack{}

impl QuackBehavior for Quack{
    fn quack(&self) {
        println!("Quack")
    }
}