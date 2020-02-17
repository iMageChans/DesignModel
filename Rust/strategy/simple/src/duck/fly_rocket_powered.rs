use crate::duck::interface::*;

pub struct FlyRocketPowered{}

impl FlyBehavior for FlyRocketPowered{
    fn fly(&self) {
        println!("I'm flying with a rocket")
    }
}