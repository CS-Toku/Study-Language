
fib()
{
    last_value=$1
    num1=1
    num2=0

    if [ "$num2" -gt "$last_value" ]; then
        return
    fi
    echo $num2
    while [ "$num1" -le "$last_value" ]
    do
        echo $num1
        tmp=`expr $num1 + $num2`
        num2=$num1
        num1=$tmp
    done
}


fib 10000
