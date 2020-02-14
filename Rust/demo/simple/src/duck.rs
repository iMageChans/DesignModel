pub enum FlyBehavior{
    Fly,
    NoFly
}

pub trait AbsFly{
    fn fly(&self);
}

pub struct Fly{}
pub struct NoFly{}

impl AbsFly for Fly{
    fn fly(&self) {
        println!("fly")
    }
}

impl AbsFly for NoFly{
    fn fly(&self) {
        println!("No fly")
    }
}

struct FlyObj{}
impl FlyObj{
    fn create(&self, fly:FlyBehavior) -> Box<dyn AbsFly>{
        match fly {
            FlyBehavior::Fly => Box::new(Fly{}),
            FlyBehavior::NoFly => Box::new(NoFly{})
        }
    }
}

pub trait Duck{
    fn new() -> Self;
    fn fly(&self);
    fn no_fly(&self);
}

pub struct MallardDuck{
    fly:FlyObj,
}

impl Duck for MallardDuck{
    fn new() -> Self {
        MallardDuck{
            fly: FlyObj{}
        }
    }

    fn fly(&self) {
        let fly = self.fly.create(FlyBehavior::Fly);
        fly.fly();
    }

    fn no_fly(&self){
        let fly = self.fly.create(FlyBehavior::NoFly);
        fly.fly();
    }
}