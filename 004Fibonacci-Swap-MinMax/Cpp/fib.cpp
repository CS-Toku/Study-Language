
#include <iostream>

const int LastValue = 10000;

void fib(const int last_num){

    int num1=1, num2=0;
    int tmp;

    if(last_num < 0)
        return;

    std::cout << num2 << std::endl;
    while(num1 <= last_num){
        std::cout << num1 << std::endl;
        tmp = num1 + num2;
        num2 = num1;
        num1 = tmp;
    }
}


int main(void){

    fib(LastValue);
    return 0;
}
