//Deleting an element from an Array

#include <iostream>
using namespace std;

int delet(int arr[], int noToDelete, int arrSize){
  int i; //Declaring i local to this entire function
  for(int i=0; i < arrSize; i++) //Checking for the position of element in the array
    if(arr[i] == noToDelete)
    break;

    if(i == arrSize) //In case, the number to be deleted isn't found
    return arrSize;

    for(int j=i; j < arrSize-1; j++) //n-1 because we need to make one space of the array vacant
      arr[i] = arr[i+1]; //Shifting all elemnts to one block left

    return arrSize-1;
}

int main()
{
  int arrSize = 5;
  int arr[] = {3,8,12,5,6};
  int noToDelete = 12;

  delet(arr,noToDelete,arrSize);
  for(int i=0; i < arrSize; i++){
    cout << arr[i] << endl;
  }
}
