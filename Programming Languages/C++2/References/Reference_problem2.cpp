// Always return a static variable from a function

#include <iostream>
using namespace std;

int &fun(){
  static int x = 10;
  return x; // We are return static, becausing non-static variables don't exist outside a function. They are local to that funciton only, but static variables are global to everywhere in the progream

}

int main(){
  int &z = fun();
  cout << fun() << " ";
  z = 30;
  cout << fun() << " ";
  return 0;
}
