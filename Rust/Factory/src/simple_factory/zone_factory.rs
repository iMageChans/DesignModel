use crate::simple_factory::zone::*;
use crate::simple_factory::zone_central::*;
use crate::simple_factory::zone_eastern::*;
use crate::simple_factory::zone_mountain::*;
use crate::simple_factory::zone_pacific::*;

pub enum ZoneType{
    Pacific,
    Mountain,
    Central,
    Eastern
}

pub struct ZoneFactory{}

impl ZoneFactory{
    pub fn new() -> Self{
        ZoneFactory{}
    }

    pub fn create(&self, z: ZoneType) -> Box<dyn Zone>{
        match z {
            ZoneType::Pacific => Box::new(ZonePacific{
                display_name: "US/Pacific",
                offset: -8
            }),
            ZoneType::Mountain => Box::new(ZoneMountain{
                display_name: "US/Mountain",
                offset: -7
            }),
            ZoneType::Central => Box::new(ZoneCentral{
                display_name: "US/Central",
                offset: -6
            }),
            ZoneType::Eastern => Box::new(ZoneEastern{
                display_name: "US/Eastern",
                offset: -5
            }),
        }
    }
}