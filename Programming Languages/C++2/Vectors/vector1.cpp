#include <vector>
#include <iostream>
using namespace std;

int main(){
  int n =10;
  vector<int> v(n,5); // It will create a vector of n size in which all the elements contains 5
  for(auto x : v){
    cout << x << " ";
  }
  return 0;
}

//Intializing a vector
int main(){
  vector<int> v {10,20,30,40,50};
  for(auto x : v){
    cout << x << " ";
  }
  return 0;
}
