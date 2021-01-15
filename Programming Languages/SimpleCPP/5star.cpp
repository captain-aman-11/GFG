#include <simplecpp>

main_program{
    turtleSim();
    repeat(5){
        forward(100);
        right(135);
        wait(2.5);
    }
    left(135);
    forward(100);
    wait(2.5);
    right(135);
    wait(5);
}
