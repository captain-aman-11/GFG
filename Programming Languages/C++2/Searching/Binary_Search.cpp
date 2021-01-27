// Binary Search always works in sorted arrays

#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return 1;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the Number to Search : " << endl;
    cin >> key;

    int start = 0;
    int end = arrSize - 1;

    if (binarySearch(arr, start, end, key) == 1)
    {
        cout << "Search Found";
    }
    else
    {
        cout << "Seems like the number doesn't exist in the above list";
    }
}