#[allow(dead_code)]
#[allow(unused_variables)]
use std::mem;

fn double_value(v: i32) -> i32 {
    return v * 2;
}

fn main() {
    let mut x: i32 = 3;
    println!("init x:{}, size: {}", x, mem::size_of_val(&x));

    x = double_value(x);
    println!("doubled x:{}, size: {}",x, mem::size_of_val(&x));
    
    x = 42;
    println!("asigned x:{}, size: {}", x,mem::size_of_val(&x));
}