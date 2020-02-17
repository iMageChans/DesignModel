use crate::obs::observer::*;

pub struct SimpleObserver {
    pub name: &'static str
}

impl Observer for SimpleObserver{
    fn update(&self, msg: &str) {
        println!("{} -> 收到消息: {}", self.name, msg);
    }
}