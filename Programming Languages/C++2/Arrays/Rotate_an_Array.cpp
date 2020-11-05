// Rotate an Arrays

/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are given a number k.
4. Rotate the array a, k times to the right (for positive values of k), and to
the left for negative values of k.
*/

#include <iostream>
using namespace std;

void reverse(int arr[], int low, int high){
  while(low < high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;

    low++;
    high--;
  }
}

void Rotate(int arr[], int arrSize, int noOfRotation){
  noOfRotation = noOfRotation % arrSize; // Coz, the array repeats itself after it's original length
  if(noOfRotation < 0)
    noOfRotation += arrSize; // We do not need to rotate inversely, just add -ve to arrSize and you will get the right answer

    //Reverse first part
    reverse(arr,0,arrSize - noOfRotation - 1);

    //Reverse Second part
    reverse(arr,arrSize - noOfRotation, arrSize -1);

    //Reverse whole array
    reverse(arr,0,arrSize-1);
}

int main(){
  int arrSize;
  cin >> arrSize;

  int arr[arrSize];
  for(int i=0; i < arrSize; i++)
    cin >> arr[i];

  int noOfRotation;
  cin >> noOfRotation;
  Rotate(arr,arrSize,noOfRotation);

  for(int i =0; i < arrSize; i++)
    cout << arr[i] << " ";

  return 0;
}
