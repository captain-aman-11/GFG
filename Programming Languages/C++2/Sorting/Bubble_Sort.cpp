// ALgorithm -> If the element of adjacent side is smaller, then swap those elements

// In Bubble Sort, for N elements in array, there will be N-1 iterations
#include <iostream>
using namespace std;

// Swap function

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int main()
{

    int arr[] = {12, 13, 4, 3, 7, 6, 1, 2, 5};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int itr = 0; itr < arrSize - 1; itr++)
    {

        for (int j = 0; j < arrSize - itr - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    //Print the Array
    for (int val : arr)
    {
        cout << val << endl;
    }
    return 0;
}
