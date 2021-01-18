#include <simplecpp>

main_program{
    turtleSim();
    repeat(36){
         repeat(4){
        forward(100);
        right(90); wait(0.1);
    }
        right(10);
    }
    wait(5);
}
