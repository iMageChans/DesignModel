use crate::duck::interface::*;

pub struct MuteQuack{}

impl QuackBehavior for MuteQuack{
    fn quack(&self) {
        println!("<< Silence >>")
    }
}