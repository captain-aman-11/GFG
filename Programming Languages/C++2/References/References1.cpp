/* References in c++ -> When a variable is declared as a reference. It becomes an alternative name for an existing variable.
A variable can be declared as a reference by putting '&' in the declaration. */

// *IMPT ->  If we make a change in the variable or the reference, changes will be reflected in both.
// * -> References must be assigned when declared.
// * -> References cannot be NULL.

#include <iostream>
#include <vector>
using namespace std;

int main(){
  int x =10;

  // ref is a reference to x.
  int &ref = x;
  cout << ref << endl;

  // Value of x is now changed to 15
  x = x+ 5;
  cout << ref << endl;

  // Value of x is now changed to 20
  ref = ref + 5;
  cout << x << endl;

  return 0;
}

// APPLICATION OF REFERENCES

// i. To Modify a passed parameter

  void swap(int &x, int &y){
    int temp = x;
    x =y;
    y = temp;
    // cout << x << " " << y << endl;
  }

  int main(){
    int x = 10, y = 15;
    swap(x,y);
    cout << x << " " << y <<endl;
    return 0;
  }

  /* ii. Avoiding a copy of large structures: Imagine a function that has to receive a large object. If we pass it without reference,
  a new copy of it is created which causes wastage of CPU time and memory. We can use reference to avoid this. */

  void print(vector<int> &v){
    for(auto x: v)
    cout << x << " ";
  }

  int main(){
    vector<int> v;
    for(int i=0; i<1000; i++)
    v.push_back(i);
    print(v);
    return 0;
  }

  /* Modifications in for each loop -> */

  int main(){
    vector<int> vect{10,20,30,40,50};

    for(auto &x: vect)
    x = x + 5;

    for(auto x: vect)
    cout << x << " ";
    return 0;
  }
