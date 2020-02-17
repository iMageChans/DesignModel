use crate::obs::observer::*;

pub trait Observable{
    fn register_observer(&mut self, obj: Box<dyn Observer>);
    fn remove_observer(&mut self, index: usize);
    fn notify_observer(&self);
}