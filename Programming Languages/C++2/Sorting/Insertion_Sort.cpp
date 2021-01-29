// Algorithm -> We start to compare from the first index

#include <iostream>
using namespace std;

int main()
{
    int arrSize;
    cin >> arrSize;

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < arrSize; i++)
    {

        int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            j
                arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int val : arr)
    {
        cout << val << endl;
    }
}