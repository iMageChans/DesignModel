use crate::simple_factory::zone::*;

pub struct ZoneEastern{
    pub display_name: &'static str,
    pub offset : i64,
}

impl Zone for ZoneEastern{

    fn get_display_name(&self) -> String {
        self.display_name.parse().unwrap()
    }

    fn get_offset(&self) -> i64 {
        self.offset
    }
}