// Largest Element in an Array

#include <iostream>
using namespace std;

int findLargest(int arr[], int arrSize){
  int res =0;

  for(int i=1; i < arrSize ;i++){
    if(arr[i] > arr[res])
    res = i;
  }

    return res;
}


int main(){
  int arr[] = {2,4,12,33,77,2344,324,23,34};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  int ans = findLargest(arr,arrSize);
  cout << "Largest no. Index is: " << ans;

    return 0;
}
