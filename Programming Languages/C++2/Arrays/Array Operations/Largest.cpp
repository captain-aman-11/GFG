//Efficient approach

#include <iostream>
using namespace std;

int largest(int arr[], int arrSize){
  int res =0;
  for(int i=0; i < arrSize; i++)
    if(arr[i] > arr[res])
    res = i;

    return res;
}

int main(){
  int arrSize =5;
  int arr[] ={ 2,51,107,222,78};
  int ans = largest(arr,arrSize);
  cout << "Index of Largest Number is : " << ans;
  return 0;
}
