// Sum of Two Arrays

/*
Question
1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to add the numbers represented by two arrays and print the
arrays.
*/

#include <iostream>
using namespace std;

int main(){
  int arrSize1;
  cin >> arrSize1;

  int arr1[arrSize1];
  for(int i=0; i < arrSize1; i++)
    cin >> arr1[i];

    int arrSize2;
    cin >> arrSize2;

    int arr2[arrSize2];
    for(int i=0; i < arrSize2; i++)
      cin >> arr2[i];

    int sum[arrSize1 > arrSize2 ? arrSize1 : arrSize2];
    int size = sizeof(sum)/sizeof(sum[0]);

    int i = arrSize1 - 1;
    int j = arrSize2 - 1;
    int k = size - 1;

    int carry = 0;

    while(k >= 0){ // Performing normal addition with taking carry when sum is greater than 10 and printing digits
      int digit = carry;

      if( i >= 0){
          digit += arr1[i];
      }

      if( j >= 0){
          digit += arr2[j];
      }

      carry = digit / 10;
      digit = digit % 10;

      sum[k] = digit;

      i--;
      j--;
      k--;
    }
    if(carry != 0){
      cout << carry;
    }

    for(auto x: sum)
      cout << x << endl;

      return 0;
  }
