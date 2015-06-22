
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int FirstValue = 1;
const int LastValue = 100;

void fizzbuzz(void);

int main(void){

    fizzbuzz();

    return 0;
}

void fizzbuzz(){

    //ちょっと意味が違うけどこれで行ける。
    vector<int> num_list(LastValue, FirstValue);
    partial_sum(num_list.begin(), num_list.end(), num_list.begin());

    for(auto num: num_list){
    
        bool mod3 = num%3 == 0;
        bool mod5 = num%5 == 0;

        if(mod3 && mod5)
            cout << "FizzBuzz" << endl;
        else if(mod3)
            cout << "Fizz" << endl;
        else if(mod5)
            cout << "Buzz" << endl;
        else
            cout << num << endl;
    }

}

