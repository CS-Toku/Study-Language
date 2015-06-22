
FIRST_VALUE = 1
LAST_VALUE = 100

def fizzbuzz
    for num in FIRST_VALUE..LAST_VALUE
        if num%15 == 0
            print "FizzBuzz\n"
        elsif num%3 == 0
            print "Fizz\n"
        elsif num%5 == 0
            print "Buzz\n"
        else
            print num.to_s + "\n"
        end
    end
end

fizzbuzz



