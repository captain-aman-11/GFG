// Factorial with Recursion

#include <iostream>
using namespace std;

int factorial(int n){
  if(n==0)
    return 1; // Return 1 to stop the execution at this point

  int fact = n * factorial(n-1);
  return fact;
}

int main(){
  int n;
  cin >> n;
  int ans = factorial(n);
  cout << "Factorial of " << n << " is : "<< ans;
}
