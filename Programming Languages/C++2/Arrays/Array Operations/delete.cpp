//Delete from an array

#include <iostream>
using namespace std;

int del(int arr[], int arrSize, int noToDelete){

  int i; //Delaring a local index

  //checking for the index of the number
  for(i =0; i < arrSize; i++)
    if(arr[i] == noToDelete)
      break;


    if(i < arrSize) //If the no. is found
    {
      arrSize = arrSize -1; //Reducing array size by one
      for(int j = i; j < arrSize; j++)
        arr[j] = arr[j+1];
    }
    return arrSize;
}


//Driver program to test above function
int main(){
  int arr[] = {2,4,5,8,22,33};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  int noToDelete;
  for(auto x : arr)
    cout << x << " ";
  cout << "\n\nEnter the no. you wwant to delete from the array : "   << endl;
  cin >> noToDelete;
  arrSize = del(arr,arrSize,noToDelete);

  for(int i=0; i < arrSize; i++)
    cout << arr[i] << " ";

  return 0;
}
