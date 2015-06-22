
using System;
using System.Linq;
using System.Collections.Generic;

class FizzBuzz
{

    const int FirstValue = 1;
    const int LastValue = 100;

    static void Main()
    {
        fizzbuzz();
    }

    static void fizzbuzz()
    {
        IEnumerable<int> num_list = Enumerable.Range(FirstValue, LastValue);
        bool mod3, mod5;

        foreach(int num in num_list)
        {
            mod3 = num%3 == 0;
            mod5 = num%5 == 0;

            if(mod3 && mod5)
            {
                Console.WriteLine("FizzBuzz");
            }
            else if(mod3)
            {
                Console.WriteLine("Fizz");
            }
            else if(mod5)
            {
                Console.WriteLine("Buzz");
            }
            else
            {
                Console.WriteLine(num);
            }
        }
    
    }
}
