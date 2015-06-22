#!/bin/sh


FirstValue=1
LastValue=100


FizzBuzz(){
    
    for num in `seq ${FirstValue} ${LastValue}`
    do
        if [ `expr $num % 15` -eq 0 ]
        then
            echo "FizzBuzz"
        elif [ `expr $num % 3` -eq 0 ]
        then
            echo "Fizz"
        elif [ `expr $num % 5` -eq 0 ]
        then
            echo "Buzz"
        else
            echo $num
        fi
    done

}



FizzBuzz
