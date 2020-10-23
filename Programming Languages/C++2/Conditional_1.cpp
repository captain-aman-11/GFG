#include <iostream> //header files
using namespace std;

// Write a program to find sum of first n antural numbeer. Your Program should generate error if entered number is negative

// int main(){
//   int n;
//   cout << "Enter a Number" << endl;
//   cin >> n;
//   if(n > 0){
//     int sum = n * (n + 1)/2;
//     cout << "Sum of "<< n << " natural numbers is " << sum;
//   }
//   else {
//     cout << "Invalid Number";
//   }
//   return 0;
// }

// Write ap program to to take age and gender of a user and print one of the following as output. i. male kid ii. female kid iii. male adult iv. female adult

int main(){
  int age;
  char gender;
  cout << "Enter Gender: M -> male or F -> Female :" << endl;
  cin >> gender;
  cout << "Enter Age: ";
  cin >> age;

  if(age >= 18){
    if(gender == 'M')
    cout << "Male Adult";
    else
    cout << "Female Adult";
  }
  else{
    if(gender == 'M')
    cout << "Male Kid";
    else
    cout << "Female Kid";
  }
}
