#include <simplecpp>

main_program{
    turtleSim();

    int nSides;
    cout << "Enter Number of Sides : ";
    cin >> nSides;

    repeat(nSides){
        repeat(5){
        forward(10);
        penUp(); wait(0.01);
        forward(5);
        penDown(); wait(0.01);
        }
        right(360.0/nSides);
        wait(0.2);
    }
    wait(5);

}
