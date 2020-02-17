use crate::duck::interface::*;

pub struct FlyWithWings{}

impl FlyBehavior for FlyWithWings{
    fn fly(&self) {
        println!("fly")
    }
}
