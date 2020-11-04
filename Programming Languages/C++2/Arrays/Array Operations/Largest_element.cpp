//Largest element in an Array

//Naive approach

#include <iostream>
using namespace std;

int LargestElement(int arr[], int arrSize){
  int largest = arr[0];
  for(int i=1; i < arrSize; i++)
{
  if(arr[i] > largest)
  largest = arr[i];
}
for(int i=0; i < arrSize;i++){
  if(arr[i] == largest){
    return i;
  }
}
}

int main(){
  int arrSize =5;
  int arr[] = {2, 5,100, 15,22};
  int ans = LargestElement(arr,arrSize);
  cout <<"Ïndex of the largest elemnt is : " << ans << endl;
  cout << "Largest Element is : " << arr[ans];
  return 0;
}
