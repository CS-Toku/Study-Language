

object Fib extends App{
    
    fibo(10000)

    def fibo(last_value: Int) = {
        var num1 = 1
        var num2 = 0
        var tmp = 0

        if (num2 <= last_value){
            Console.println(num2)
            while(num1 <= last_value){
                Console.println(num1)
                tmp = num1 + num2
                num2 = num1
                num1 = tmp
            }
        }
    }

}


