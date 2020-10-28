#include <iostream>
using namespace std;

// int main(){
//   int x =10;
//   int &y = x;  // y is a reference variable referring to x.
//
//   cout << y << endl;
//   x = x+ 5;
//   cout << y << endl;
//   y = y + 5;
//   cout << x << endl;
//
//   return 0;
// }

// APPLICATION OF REFERENCES

// i. To Modify a passed parameter

  void swap(int &x, int &y){
    int temp = x;
    x =y;
    y = temp;
    // cout << x << " " << y << endl;
  }

  int main(){
    int x = 10, y = 15;
    swap(x,y);
    cout << x << " " << y <<endl;
    return 0;
  }
