/*
VECTOR ITERATORS

1. begin() - Returns an iterator pointing to the first element in the vector
2. end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector

3. rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() = Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

5. cbegin() - Returns a constant iterator pointing to the first element in the vector
6. cend() - Returns a constant iterator pointing to the theoretical element that follows the last element in the vector

7. crbegin() - Returns a constant reverse iterator pointing to the last element in the vector (reverese beginning). It moves from last to first element
8. crend() - Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

*/

// C++ program to illustrate the iterators in vector

#include<vector> //Vector header files
#include<iostream>
using namespace std;

int main(){
  vector<int> v1;  //Initializing a vector

  //Inserting Values
  for(int i=1; i <=5 ;i++){
    v1.push_back(i); // NOTE: It inserts the value at the end
  }

  //Using begin() and end()
  cout << "Output of begin and end :"<< endl;

  for(auto i = v1.begin(); i != v1.end(); ++i) //auto detects the variable type itself
  cout << *i << " ";

  //Using rbegin() and rend()
  cout << "\n Output of rbegin and rend :" << endl;
  for(auto ir = v1.rbegin() ; ir != v1.rend(); ++ir)
  cout << *ir << " ";

  //Using cbegin() and cend()
  cout << "\n Output of cbegin and cend: "<< endl;
  for(auto ic = v1.cbegin(); ic != v1.cend(); ++ic)
  cout << *ic << " ";

  //Using crbegin() and crend()
  cout << "\n Output of crbegin and crend:  "<<endl;
  for(auto icr = v1.crbegin(); icr != v1.crend(); ++icr)
  cout << *icr << " ";
}
