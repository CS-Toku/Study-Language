
use strict;

my $FirstValue = 1;
my $LastValue = 100;

&fizzbuzz();

sub fizzbuzz {
    foreach my $num ($FirstValue .. $LastValue){
        if($num%15==0){
            print "FizzBuzz\n";
        }
        elsif($num%3==0){
            print "Fizz\n";
        }
        elsif($num%5==0){
            print "Buzz\n";
        }
        else{
            print $num."\n";
        }
    }
}
