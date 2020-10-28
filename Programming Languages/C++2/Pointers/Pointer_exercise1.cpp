// Most asked interview question

#include <iostream>
using namespace std;

//Variation 1
//
//
// int main(){
//   int arr[] = {10, 20};
//   int *ptr1 = arr; //*ptr1 will point to the first address of the array i.e., arr[0]

//  (prefix Operator)
//   ++*ptr1; //Both the ++ and * operator has same precedence, thefore we should go for associativity, which is right to left
//
//   //Hence ++(*ptr1) -> ++(10) -> 11;
//
//   cout << arr[0] << " " << arr[1] << " " << *ptr1;
//   return 0;
// }

// Variation 2

// int main(){
//   int arr[] = {10, 20};
//   int *ptr2 = arr;
//   // (postfix operator)
//   *ptr2++; /* It will execute like : *(ptr2++) -> It means ptr2 will point to the next block of the array, i.e., arr[1] and after that
//   it will derefernce it. -> *(arr[1]) => 20; */
//
//   cout << arr[0] << " " << arr[1] << " " << *ptr2;
//   return 0;
// }

//Variation 3

int main(){
  int arr[] = {10, 20};
  int *ptr3 = arr;

  *++ptr3;

 cout << arr[0] << " " << arr[1] << " " << *ptr3;
  return 0;

}
