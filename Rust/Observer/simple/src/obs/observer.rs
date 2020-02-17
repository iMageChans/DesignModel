pub trait Observer{
    fn update(&self, msg: &str);
}