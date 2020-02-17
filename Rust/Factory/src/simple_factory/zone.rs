pub trait Zone {
    fn get_display_name(&self) -> String;
    fn get_offset(&self) -> i64;
}