//Delete from an Array

#include <iostream>
using namespace std;

int del(int arr[], int arrSize, int noToDelete){
  int i;
  for(int i =0; i < arrSize; i++)
    if(arr[i] == noToDelete)
      break;

  if(i == arrSize)
    return arrSize; //In case the element is not found

  for(int j=i; j < arrSize-1; j++){
    arr[j]  = arr[j+1];
  }

    return arrSize-1;
}

int main(){
  int arr[] = {2,4,8,12,16};
  int arrSize = 5;
  int noToDelete = 12;
  arrSize = del(arr,arrSize,noToDelete);
  for(auto x: arr)
  cout << x << endl;

  return 0;
}
