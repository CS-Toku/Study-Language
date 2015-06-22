
#include <stdio.h>

const int FirstValue = 1;
const int LastValue = 100;

void fizzbuzz(void);


int main(void){

    fizzbuzz();

    return 0;
}


void fizzbuzz(void){

    int i=0;
    int mod3, mod5;
    for(i=FirstValue; i<=LastValue; i++){

        mod3 = i%3 == 0;
        mod5 = i%5 == 0;

        if(mod3 && mod5)
            puts("FizzBuzz");
        else if(mod3)
            puts("Fizz");
        else if(mod5)
            puts("Buzz");
        else
            printf("%d\n", i);
    }
}
