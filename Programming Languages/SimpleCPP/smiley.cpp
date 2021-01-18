#include <simplecpp>

main_program{
    turtleSim();
    wait(5);

    repeat(360){
        forward(1);
        right(1);
        wait(0.001);
    }

    // Left eye
    penUp();
    right(110);
    forward(50); wait(0.2);
    penDown();
    repeat(360){
        forward(0.1);
        right(1);
    }
    wait(0.2);

    // Rigth Eye
    penUp();
    left(120);
    forward(40);
    penDown();
    repeat(360){
        forward(0.1);
        right(1);
    }
    wait(0.2);

    penUp();

    right(100);
    forward(38);

    //Smile
    penDown();

    repeat(90){
        forward(0.8);
        right(2);
        wait(0.000001);
    }
    penUp();
    forward(100000);

    wait(115);




}
