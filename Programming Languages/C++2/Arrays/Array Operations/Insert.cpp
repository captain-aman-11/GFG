//Inserting in an Array

#include <iostream>
using namespace std;

int insert(int arr[], int noToInsert, int arrSize, int capacity, int position ){


  if(arrSize == capacity)
  return arrSize; //When the array is already full

  int idx = position -1; // Index where the element need to be inserted

  for(int i=arrSize-1; i>=idx; i--)
  arr[i+1] = arr[i]; //Shifting all elements one block ahead

  arr[idx] = noToInsert;
  return arrSize+1;// It increses the elments count
}

int main(){
  int capacity =5;
  int arr[capacity] = {5,10,20}; // 2 space is vacant
  int arrSize = 3; //Three elements are filled till now
  int noToInsert = 7;
  int position = 2;


  insert(arr,noToInsert,arrSize,capacity,position);
  for(int i=0; i < capacity ; i++){
    cout << arr[i] << endl;
  }
  return 0;
}
