
#include <stdio.h>

const int LastValue = 10000;


void fib(const int last_num){
    int num1=1, num2=0;
    int tmp;
    if(last_num < 0)
        return;

    printf("%d\n", num2);
    while(num1 <= last_num){
        printf("%d\n", num1);
        tmp = num1 + num2;
        num2 = num1;
        num1 = tmp;
    }
}

int main(void){

    fib(LastValue);
    return 0;
}

