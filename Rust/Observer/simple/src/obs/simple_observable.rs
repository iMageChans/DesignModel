use crate::obs::observable::*;
use crate::obs::observer::*;

pub struct SimpleObservable{
    msg: &'static str,
    list: Vec<Box<dyn Observer>>
}

impl SimpleObservable{
    pub fn new() -> SimpleObservable{
        return SimpleObservable{
            list: Vec::new(),
            msg: ""
        };
    }

    pub fn set_data_msg(&mut self, msg: &'static str) {
        self.msg = msg;
        self.notify_observer();
    }
}

impl Observable for SimpleObservable{
    fn register_observer(&mut self, obj: Box<dyn Observer>) {
        self.list.push(obj)
    }

    fn remove_observer(&mut self, index: usize) {
        self.list.remove(index);
    }

    fn notify_observer(&self) {
        for obj in self.list.iter() {
            obj.update(self.msg);
        }
    }
}