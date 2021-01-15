#include <simplecpp>

main_program{
    turtleSim();

    // A
    left(60); wait(0.2);
    forward(20);  wait(0.2);

    repeat(3){
        forward(20);
        right(120);
        wait(0.2);
    }
    right(60);
    penUp();
    forward(20);
    penDown();
    right(60);
    forward(20);

    // M
    penUp();
    left(60);  wait(0.2);
    forward(20);
    penDown();
    left(90);  wait(0.2);
    forward(20);
    right(135); wait(0.2);
    forward(8);
    left(90); wait(0.2);
    forward(8);
    right(135); wait(0.2);
    forward(20);

    //A
    left(90);
    penUp();
    forward(20);
    penDown();
     // A
    left(60); wait(0.2);
    forward(20);  wait(0.2);

    repeat(3){
        forward(20);
        right(120);
        wait(0.2);
    }
    right(60);
    penUp();
    forward(20);
    penDown();
    right(60);
    forward(20);

    penUp();
    left(60); wait(0.2);
    forward(20);
    penDown();
    left(90);
    forward(20);
    right(135); wait(0.2);
    forward(20);
    left(135);
    forward(20);

    wait(5);

}
