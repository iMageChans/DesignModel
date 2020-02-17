use crate::duck::FlyType;

pub trait Duck {
    fn new() -> Self;
    fn fly(&self, fly_type: FlyType);
}

pub trait FlyBehavior{
    fn fly(&self);
}

pub trait QuackBehavior{
    fn quack(&self);
}