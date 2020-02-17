pub trait Duck {
    fn new() -> Self;
    fn fly(&self);
    fn no_fly(&self);
}

pub trait FlyBehavior{
    fn fly(&self);
}