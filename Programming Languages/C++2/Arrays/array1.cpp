//Find  the maximum element of an array

#include<iostream>
using namespace std;

int main(){
  int arr[] = {10,20,100, 40,50,500,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  int result = arr[0];
  for(int i =0; i < size; i++){
    if(arr[i] > result){
      result = arr[i];
    }
  }


  //Using max function
  for(int i =0; i < size ; i++){
    result = max(result,arr[i]); //max is a built in function
  }

  // Direct method to find the max of an arrays
  int result = *max_element(arr,arr+size);

  cout << "Maximaul element of the array is : "<< result ;
  return 0;
}
