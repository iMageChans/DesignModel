use crate::duck::interface::*;
use crate::duck::fly::*;

pub struct MallardDuck{
    fly:Fly,
}

impl Duck for MallardDuck{
    fn new() -> Self{
        MallardDuck{
            fly:Fly{}
        }
    }

    fn fly(&self) {
        let fly = self.fly.create(FlyType::FlyWithWings);
        fly.fly();
    }

    fn no_fly(&self){
        let fly = self.fly.create(FlyType::FlyNoWay);
        fly.fly();
    }
}