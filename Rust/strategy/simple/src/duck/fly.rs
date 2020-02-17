use crate::duck::interface::*;
use crate::duck::fly_with_wings::*;
use crate::duck::fly_rocket_powered::*;
use crate::duck::fly_no_way::*;

pub enum FlyType{
    FlyWithWings,
    FlyNoWay,
    FlyRocketPowered,
}

pub struct Fly{}
impl Fly{
    pub fn create(&self, fly:FlyType) -> Box<dyn FlyBehavior>{
        match fly {
            FlyType::FlyWithWings => Box::new(FlyWithWings{}),
            FlyType::FlyNoWay => Box::new(FlyNoWay{}),
            FlyType::FlyRocketPowered => Box::new(FlyRocketPowered{}),
            _=> Box::new(FlyWithWings{}),
        }
    }
}