#include <iostream>
using namespace std;

//Defining a class
// -> class keyword is used to define a car
class Car
{
private:
    int price;

public:
    int Number;
    int Model_No;
    string name;

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Model_No: " << Model_No << endl;
        cout << "Number: " << Number << endl;
        cout << "Price: " << price << endl;
    }

    //Setter function for price
    void set_price(int p)
    {
        if (p > 100)
        {
            price = p;
        }
        else
        {
            price = 110;
        }
    }

    //Getter function for price
    int get_price()
    {
        return price;
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
    c.set_price(1);

    c.print();
    // cout << c.get_price() << endl;
    cout << sizeof(c) << endl;
}

// Class doesn't occupy any kind of memory, where as objects do.