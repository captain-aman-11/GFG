// Algorithm -> Find the minimum element first, and then swap it with starting index

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int arrSize;
    cin >> arrSize;

    int arr[arrSize];

    //Taking inputs inside the array
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    //Selection Sort
    for (int i = 0; i < arrSize - 1; i++)
    { // For N elements, there will be N-1 iterations

        int minIndex = i; // At first, we assume the i-th index element as the minimum element

        for (int j = i + 1; j < arrSize; j++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(&arr[i], &arr[minIndex]);
    }
    for (int val : arr)
    {
        cout << val << endl;
    }
    return 0;
}