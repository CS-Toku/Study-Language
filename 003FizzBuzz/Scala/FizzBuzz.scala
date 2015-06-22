


object FizzBuzz extends App {
    
    val first_value = 1
    val last_value = 100
    
    fizzbuzz(first_value, last_value)

    def fizzbuzz(num:Int, last:Int){
        if(num%15 == 0){
            println("FizzBuzz")
        }
        else if(num%3 == 0){
            println("Fizz")
        }
        else if(num%5 == 0){
            println("Buzz")
        }
        else{
            println(num)
        }
        
        if(num < last){
            fizzbuzz(num+1, last)
        }
    }
    
}


