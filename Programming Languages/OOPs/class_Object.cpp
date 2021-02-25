#include <iostream>
using namespace std;

//Defining a class
// -> class keyword is used to define a car
class Car
{
public:
    int Number;
    int Model_No;
    string name;

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Model_No: " << Model_No << endl;
        cout << "Number: " << Number << endl;
    }
};

//Driver Program
int main()
{

    //Creating an object
    Car c;
    c.Number = 20;
    c.Model_No = 01;
    c.name = "BMW";

    c.print();
    cout << sizeof(c) << endl;
}

// Class doesn't occupy any kind of memory, where as objects do.