#include <iostream>
using namespace std;

//Swap function

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Selection Sort
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {12, 13, 4, 3, 7, 6, 1, 8, 9, 6, 2, 5};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, arrSize);
    // Print the array
    for (int val : arr)
    {
        cout << val << " ";
    }
}