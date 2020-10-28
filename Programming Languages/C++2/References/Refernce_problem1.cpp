// Guess the output of x,y,z

#include <iostream>
using namespace std;

int main(){
  int x = 10, z = 20;
  int &y = x;
  y = z;
  y = y + 5;

  cout << "x : " <<  x << " " << "y : " <<  y << " " << "z : " <<  z;
  return 0;

}
