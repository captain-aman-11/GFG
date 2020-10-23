// !Important

#include <iostream>
using namespace std;

int main(){
  int a = 10, b = 20, c = 30;
  if(c > b > a){  //  (c > b > a)  => (c > b) > a  => 1 > a (which is false), coz c > b return 1 i.e., true in boolean. PS: Relative statements execute left to right
    cout << "Y";
  }
  else {
    cout << "N";
  }
  return 0;
}

//Output: N
