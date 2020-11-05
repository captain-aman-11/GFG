// Fibonacci using Recursion

#include <iostream>
using namespace std;

void fibonacci(int n){
  if(n == 0)
    return;

  int fnm1 = fibonacci(n-1);
  int fib = n + fnm1;
  cout << fib << " ";
}

int main(){
  int n;
  cin >> n;

  fibonacci(n);
  return 0;
}
