// Searching in an Array

#include <iostream>
using namespace std;

int search(int arr[], int arrSize,int x){
  for(int i=0; i < arrSize; i++)
  if(arr[i] == x)
  return i;

  return -1;
}

int main(){
  int x = 7; // Number needed to be searched
  int arr[] = {20,5,7,25};
  int arrSize = 4;
  cout << "Index is : " << search(arr,4,x);
}
