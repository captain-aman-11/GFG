#include <iostream>
using namespace std;

void fun(int n){
  if ( n < 1)
    return; // Coz it's a void function, so no value with return;

  cout << n << endl;
  fun(n-1);
  cout << n << endl;
}

int main(){
  fun(3);
}
