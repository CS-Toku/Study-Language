

class Fib{

    public static void main(String[] args){
    
        fib(10000);
    
    }

    private static void fib(int last_value){
    
        int num1 = 1, num2 = 0, tmp;
        
        if(num2 > last_value)
            return;

        System.out.println(num2);
        while(num1 < last_value){
            System.out.println(num1);
            tmp = num1 + num2;
            num2 = num1;
            num1 = tmp;
        }
    }
}



