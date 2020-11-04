// Find the second largest element of an array

// (Naive Approach) - Using two Traversals

#include <iostream>
using namespace std;

int getLargest(int arr[], int arrSize){
  int largest = 0;

  for(int i=1; i < arrSize; i++)
    if(arr[i] > arr[largest])
      largest = i;

  return largest;
}

int secondLargest(int arr[], int arrSize){

  int largest = getLargest(arr,arrSize);

  int res = -1; // If there is no second largest element, then we should return -1

  // Check for all the numbers other than the largest number
  for(int i =0; i < arrSize; i++){

    if(arr[i] != arr[largest]) // Checking whether the number is different from the largest or not
      if(res == -1)
        res = i; //Updating index of res

      else if(arr[i] > arr[res]) //Checking for the second largest number
        res = i;
  }
  return res;
}

//Driver program
int main(){
  int arr[] = { 2,4,8,12,13,12,18,7, 5 ,8};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  int ans = secondLargest(arr,arrSize);
  cout << "Index of Second Largest Element is : " << ans << endl;
  cout << "And the second largest Number is : " << arr[ans];
  return 0;
}

// Time complexity : O(n)
