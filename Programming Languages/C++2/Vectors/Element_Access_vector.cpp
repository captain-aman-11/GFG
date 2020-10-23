/*

ELEMENT ACCESS:

1. reference operator [g] - Returns a reference to the element at position 'g' in the vector
2. at(g) - Returns a reference to the element at position 'g' in the vector
3. front() - Returns a reference to the first element in the vector
4. back() - Returns a reference to the last element in the vector
5. data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements

*/

// C++ program to illustratte the element accesser in vector
#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v1;

  for(int i =1; i <= 10; i++)
  v1.push_back(i*10);

    cout<<"\nReference operator [g] : v1[2] = " << v1[2]; // At position 2 there is 30

    cout << "\n at : v1.at(4) = " << v1.at(4);

    cout << "\nfront() : v1.front() = " << v1.front();

    cout << "\nback() : v1.back() = " << v1.back();

    //pointer to the first elements
    int* pos = v1.data();

    cout << "\n The first element is : " << *pos;
    return 0;
}
