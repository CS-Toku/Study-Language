
package main

import "fmt"

func main(){
    fib(10000);
}

func fib(last_value int){
    num1 := 1
    num2 := 0

    if num2 > last_value{
        return
    }
    fmt.Println(num2)
    for ;num1 < last_value; {
        fmt.Println(num1)
        tmp := num1 + num2
        num2 = num1
        num1 = tmp
    }
}


