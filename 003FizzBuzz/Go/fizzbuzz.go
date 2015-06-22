
package main

import "fmt"

const (
    FirstValue int = 1
    LastValue int = 100
)

func main(){

    fizzbuzz();

}


func fizzbuzz(){

    for i:=FirstValue; i<=LastValue; i++ {
        switch {
        case i%15==0: fmt.Println("FizzBuzz")
        case i%3==0: fmt.Println("Fizz");
        case i%5==0: fmt.Println("Buzz");
        default: fmt.Println(i)
        }
    }
}
