mod simple_factory;
use crate::simple_factory::*;

fn main() {
    let pacific = ZoneFactory::new().create(ZoneType::Pacific);
    let pacific_name = pacific.get_display_name();
    let pacific_off = pacific.get_offset();

    println!("{}", pacific_name);
    println!("{}", pacific_off);

    let mountain = ZoneFactory::new().create(ZoneType::Mountain);
    let mountain_name = mountain.get_display_name();
    let mountain_off = mountain.get_offset();

    println!("{}", mountain_name);
    println!("{}", mountain_off);

    let central = ZoneFactory::new().create(ZoneType::Central);
    let central_name = central.get_display_name();
    let central_off = central.get_offset();

    println!("{}", central_name);
    println!("{}", central_off);

    let eastern = ZoneFactory::new().create(ZoneType::Eastern);
    let eastern_name = eastern.get_display_name();
    let eastern_off = eastern.get_offset();

    println!("{}", eastern_name);
    println!("{}", eastern_off);
}
