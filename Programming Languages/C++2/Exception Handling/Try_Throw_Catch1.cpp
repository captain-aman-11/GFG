/*
try{
        //the code that may
        //throw exception
}

throw: Used to throw an exception

catch: One or more catch blocks are used to handle the exception

*/

#include <iostream>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;

try{
  if(y==0){
    throw 0;
  }
  if(y==1){
    throw 1;
  }
  cout << "Result is : " << x/y;
}

catch(int x){ //We are throwing an integer 0, that's why here is int x.
  cout << "Division is :" << x;
}
return 0;
}
