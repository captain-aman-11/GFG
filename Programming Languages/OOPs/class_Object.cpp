#include <iostream>
using namespace std;

//Defining a class
// -> class keyword is used to define a car
class Car
{
    int Number;
    int Model_No;
    char name[20];
};

//Driver Program
int main()
{

    //Creating an object
    Car c;

    cout << sizeof(c) << endl;
}

// Class doesn't occupy any kind of memory, where as objects do.