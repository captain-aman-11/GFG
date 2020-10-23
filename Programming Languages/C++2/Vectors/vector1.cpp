#include <vector>
#include <iostream>
using namespace std;

int main(){
  int n =10;
  vector<int> v(n,5); // It will create a vector of n size in which all the elements contain 5
  for(auto x : v){
    cout << x << " ";
  }
  return 0;
}
