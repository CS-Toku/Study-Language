
use strict;

sub fib {

    my $last_value = @_[0];
    my $num1 = 1;
    my $num2 = 0;

    if($num2 > $last_value){
        return;
    }
    print "$num2\n";
    while($num1 < $last_value){
        print "$num1\n";
        ($num1, $num2) = ($num1+$num2, $num1);
    }
}



&fib(10000);
