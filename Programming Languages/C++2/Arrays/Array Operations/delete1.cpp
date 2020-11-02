#include <iostream>
using namespace std;

int main()
{
  int arrSize = 5;
  int arr[] = {3,8,12,5,6};
  int noToDelete = 12;

  // delete(arr,noToDelete,arrSize);
  for(auto x: arr)
  cout << x << endl;
}
