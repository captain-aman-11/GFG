// Inverrse of an Array

/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to calculate the inverse of array a.
*/
#include <iostream>
using namespace std;

//Logic- For Invered array -> originalPlace = InvertedDigit and originalDigit = invertedPlace

int main(){
  int arrSize;
  cin >> arrSize;
  int arr[arrSize];

  for(int i=0; i < arrSize; i++)
    cin >> arr[i];

  int inv[arrSize];

  //Logic loop to inverse an array
    for(int i=0; i < arrSize; i++){
      int originalDigit = arr[i];
      inv[originalDigit] = i; // InvertedDigit is originalPlace i.e., i
    }

  for(auto x: inv)
    cout << x << " "; // Printing the Inverted array

  return 0;
}
