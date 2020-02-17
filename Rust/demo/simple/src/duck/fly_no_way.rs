use crate::duck::interface::*;

pub struct FlyNoWay{}

impl FlyBehavior for FlyNoWay{
    fn fly(&self) {
        println!("No fly")
    }
}
