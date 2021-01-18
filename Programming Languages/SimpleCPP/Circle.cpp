#include <simplecpp>

main_program{

    turtleSim();
    wait(20);
    repeat(360){
        forward(1);
        right(1);
        wait(0.01);
    }
}
