

class Fib{

    static void Main(string[] args)
    {
        fib(10000);
    }

    static void fib(int last_num)
    {
        int num1=1, num2=0,tmp;
        if(num2 > last_num) return;

        System.Console.WriteLine(num2);
        while(num1 < last_num)
        {
            System.Console.WriteLine(num1);
            tmp = num1 + num2;
            num2 = num1;
            num1 = tmp;
        }
    }
}
