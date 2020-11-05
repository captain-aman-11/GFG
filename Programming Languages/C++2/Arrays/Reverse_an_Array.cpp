// Reverse an Arrays

/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to reverse the contents of array a.
*/

#include <iostream>
using namespace std;

int main(){
  int arrSize;
  cin >> arrSize;

  int arr[arrSize];
  for(int i=0; i < arrSize; i++)
    cin >> arr[i];

  int low = 0; // For finding Reverse, we take two pointers at two ends and swaps the value by coming close
  int high = arrSize -1;

  while(low < high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;

    low++;
    high--;
  }

  for(auto x: arr)
    cout << x << endl;

  return 0;
}
