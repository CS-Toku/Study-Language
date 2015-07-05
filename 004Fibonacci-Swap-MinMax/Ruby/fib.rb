

def fib(last_value)
    num1 = 1
    num2 = 0

    if num2 > last_value 
        return
    end
    puts num2
    while num1 < last_value
        puts num1
        num1, num2 = num1+num2, num1
    end
end


if __FILE__ == $0
    fib(10000)
end
