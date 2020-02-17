use crate::obs::*;

mod obs;

fn main() {
    let mut server = SimpleObservable::new();
    server.register_observer(Box::new(SimpleObserver{name:"张三"}));
    server.register_observer(Box::new(SimpleObserver{name:"李四"}));
    server.register_observer(Box::new(SimpleObserver{name:"王五"}));
    server.set_data_msg("123");
}
