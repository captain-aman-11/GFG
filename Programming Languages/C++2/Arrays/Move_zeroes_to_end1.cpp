// Move all zeroes to end

// Naive Approach, Time Complexity : O(n^2)

#include <iostream>
using namespace std;

void moveZeroes(int arr[], int arrSize){

  for(int i=0; i < arrSize; i++){
    if(arr[i] == 0)
    {
      for(int j = i + 1; j < arrSize ; j++)
        if(arr[j] != 0)
          swap(arr[i],arr[j]);// If you want to run in java, Write a separate swap function in it
      }
  }
}


int main(){
  int arr[] = {8,5,0,10,0,20};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  moveZeroes(arr,arrSize);
  for(auto x: arr)
    cout << x << " ";
}
