// Move all the zeroes at end

// Efficient Approach, Time Complexity O(n)

#include <iostream>
using namespace std;

void moveZeroes(int arr[], int arrSize){
  int count = 0;
  for(int i=0; i < arrSize; i++){
    if(arr[i]!=0){
      swap(arr[i], arr[count]);
      count++;
    }
  }
}

// Driver Program
int main(){
  int arr[] = {8,5,0,10,0,20};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  moveZeroes(arr,arrSize);
  for(auto x: arr)
    cout << x << " ";

    return 0;
}
/* Logic of the Code
i=0; {10,8,0,12,0}, count = 1;
i=1; ............., count = 2;
i=2;.............., count =2; //Zero is here, that's why count is not incremented
i=3;..............., count =2;
i=4;{10,8,12,0,0,0}, count = 3;
i=5;.................,count =3;
i=6;.................,count = 3;
*/
