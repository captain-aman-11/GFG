//Find the second largest element of an Array

//Efficient Approach : using only one Traversal

#include <iostream>
using namespace std;

int secondLargest(int arr[], int arrSize){
  int res = -1, largest = 0;

  for(int i =0; i < arrSize; i++){

    // Program to find the largest
    if(arr[i] > arr[largest]){
      res = largest; // Result will take the index of largest. Hint: Res will always point to the previous value of Largest
      largest = i;
    }

    else if(arr[i] != arr[largest]) // Checking for all the numbers except for the largest number
      if(res == -1 || arr[i] > arr[res])
        res = i;

  }
  return res;
}

int main(){
  int arr[] = {20,10,20,8,12,22};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  int ans = secondLargest(arr,arrSize);
  cout << "Index of second largest number is : " << ans << endl;
  cout << "Second Largest Number is : "<< arr[ans];
}

//Time Complexity : O(n)
