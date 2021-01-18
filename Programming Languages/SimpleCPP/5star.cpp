#include <simplecpp>

main_program{
    turtleSim();
    repeat(7){
        forward(100);
        right(103); // Since angle between lines of star is 36 degree. Hence angle to move = 90 + (90 - 36) = 90 + 54 = 144
        wait(0.3);
    }
    wait(50999);
}
