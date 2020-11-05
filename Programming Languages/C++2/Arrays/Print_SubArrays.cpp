// Print al lthe subarrays

/*
Question
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to print all sub arrays of arr. Each sub array should be
on separate line. For more clarity check out sample input and output.
*/
#include <iostream>
using namespace std;

int main(){
   int arrSize;
   cin >> arrSize;

   int arr[arrSize];
   for(int i=0; i < arrSize; i++)
    cin >> arr[i];

    for(int i=0; i < arrSize; i++){
      for(int j=i ; j < arrSize; j++){
          for(int k=i; k <=j ; k++){
            cout << arr[k] << "\t";
          }
          cout << endl;
      }
    }
}
