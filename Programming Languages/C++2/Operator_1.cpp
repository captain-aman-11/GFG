#include <iostream> // Header files                      PS: Comment out other block of codes to execute a specific one
using namespace std;

int main(){
  int x= 5;
  bool rel = (x==4) && (x++); // Since, x is not equal to 4, thus statement will not execute;
  cout << rel << " "<< x;  //Output: 0 5
  return 0;
}

int main(){
  int x= 5;
  bool rel = (x==4) || (x++); // x will be incremented by 1 i.e., x =6
  cout << rel << " "<< x;   //Output:  1(True) 6
  return 0;
}

int main(){
  int x= 5;
  bool rel = (x==5) || (x++); // Since, x =5, therefore next expression is not checked, i.e., x++ is not executed, hence x remains 5
  cout << rel << " "<< x;   //Output:  1 5
  return 0;
}


// COMMA Operator - Comma has the least precedence

//With parenthesis
int main(){
  int x = 1, y = 2, z = 3,a;
  a = (x,y,z);  //Moving left to right, comma operator return the rightmost value.
  cout << a; //Output: 3 i.e., z
  return 0;
 }

//Without parenthesis
int main(){
  int x =1, y =2, z=3,a;
  a = x,y,z; // Assignment operator has more precedence than comma operator, therefore x is assigned
  cout << a; //Output: 1 i.e., x
  return 0;
}


/* Reason for above two programs to work differently : Operator Associativity
 Operator Associativity: In programming languages, the assoicativity of an operator is a property that determines how operators of the same precedence
 are grouped in the absence of parenthesis */
