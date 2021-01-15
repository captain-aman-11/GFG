#include <simplecpp>

main_program{
    turtleSim();
    int nSides; //It tells the computer to store a memory cell in which I can story my integer
    cout << "Enter Number of Sides : ";
    cin >> nSides;

    repeat(nSides){
        forward(50);
        right(360.0/nSides);
        wait(0.2);
    }
    wait(5);
}
