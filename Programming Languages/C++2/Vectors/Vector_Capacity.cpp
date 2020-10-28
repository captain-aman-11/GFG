/*
VECTOR CAPACITY

1. size() - Returns the number of elements in the vector
2. max_size() - Returns the maximum number of elements that the vector can hold.
3. capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements
4. resize(n) - Resizes the container so that it contains 'n' elements
5. empty() - Returns whether the container is empty
6. shrink_to_fit() - Reduces the capacity of the container ot fit its size and destroys all elements beyond the CAPACITY
7. reserve() - Requests that the vector capacity be at least enough to contain n elements.

*/

//C++ program to illustrate the capacity function in vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> v1;

  for(int i=1; i<=5; i++)
  v1.push_back(i);

  cout << "Size : " << v1.size();
  cout << "\n\nCapacity : " << v1.capacity();
  cout << "\n\nMax_Size : " << v1.max_size();

  //resizes the vector size to 4
  v1.resize(4);

  //Prints the vector size after resize()
  cout << "\n\nSize : "<< v1.size();

  //checks if vector is empty or NOTE
  if(v1.empty() == false)
  cout << "\n\nVector is not empty";

  else
  cout << "\n\nVector is empty";

  //Shrinks the vector
  v1.shrink_to_fit();
  cout << "\nVector elements are: ";
  for(auto it = v1.begin(); it!= v1.end(); it++)
  cout << *it << " ";

  return 0;
}
