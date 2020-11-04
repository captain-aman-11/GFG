// Span of Array

/*
Question
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.

Sample Input

6 15 30 40 4 11 9
Sample Output
36 -> (Max - Min) -> 40 -4
*/

#include <iostream>
using namespace std;

int getMax(int arr[], int arrSize){
  int max = 0;

  for(int i=1; i < arrSize; i++)
    if(arr[i] > arr[max])
      max = i;

  return max;
}

int getMin(int arr[], int arrSize){
  int min =0;

  for(int i=1; i < arrSize; i++)
    if(arr[i] < arr[min])
      min = i;

  return min;
}

//Driver function
int main(){
  int arrSize;
  cin >> arrSize;

  int arr[arrSize];
  for(int i=0; i < arrSize ; i++)
    cin >> arr[i];

  int max = getMax(arr,arrSize);
  int min = getMin(arr,arrSize);

  int span = arr[max] - arr[min];
  cout << span;

  return 0;
}
