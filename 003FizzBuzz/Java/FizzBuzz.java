
public class FizzBuzz {

    static private int FirstValue = 1;
    static private int LastValue = 100;

    public static void main(String[] args){
        fizzbuzz();
    }

    public static void fizzbuzz(){
        for(int i=FirstValue; i<=LastValue; i++){
            if(i%15==0){
                System.out.println("FizzBuzz");
            }
            else if(i%3==0){
                System.out.println("Fizz");
            }
            else if(i%5==0){
                System.out.println("Buzz");
            }
            else{
                System.out.println(i);
            }
        }
    }
}
