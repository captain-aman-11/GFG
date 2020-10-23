/*

MODIFIERS:

1. assign() - It assigns new value to the vector elements by replacing old ones
2. push_back() - It push the elements into a vector from the back
3. pop_back() - It is used to pop or remove elements from a vector from the back
4. insert() - It inserts new elements before the element at the specified position
5. erase() - It is used to remove elements from a container from the specified psition or range
6. swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7. clear() - It is used to remove all the elements of the vector container
8. emplace() - It extends the container by inserting new element at position
9. emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector

*/

// C++ program to illustrate the Modifiers in Vectors
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  //Assign vector
  vector<int> v1;

  // fill the array with 10 five times
  v1.assign(5,10);

  cout << "The vector elements are: ";
  for(int i=0; i < v1.size(); i++)
  cout << v1[i] << " ";

  //inserts 15 to the last position
  v1.push_back(15);
  int n = v1.size();
  cout << "\nThe last element is : "<< v1[n-1];


}
