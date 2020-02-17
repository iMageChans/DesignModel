use crate::duck::interface::*;
use crate::duck::fly::*;
use crate::duck::fly_with_wings::FlyWithWings;

pub struct MallardDuck{
    fly:Fly,
}

impl Duck for MallardDuck{
    fn new() -> Self {
        MallardDuck{
            fly:Fly{}
        }
    }

    fn fly(&self, fly_type : FlyType) {
        let fly = self.fly.create(fly_type);
        fly.fly();
    }
}