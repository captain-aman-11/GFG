#include <iostream>
using namespace std;

//Insertion Sort
void insertionSort(int arr[], int size)
{
    int value, index;

    for (int i = 1; i < size; i++)
    {
        value = arr[i];
        index = i;

        while (index > 0 && arr[index - 1] > arr[index])
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
    //Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 13, 4, 3, 7, 6, 1, 8, 9, 6, 2, 5};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, arrSize);
}