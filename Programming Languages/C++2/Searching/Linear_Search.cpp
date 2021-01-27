#include <iostream>
using namespace std;

bool linearSearch(int arr[], int arrSize, int key)
{

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 550, 94, 79, 22, 47, 54};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int n;
    cout << "Enter the number to search" << endl;
    cin >> n;

    if (linearSearch(arr, arrSize, n) == 1)
    {
        cout << "Search Found";
    }
    else
    {
        cout << "Searched the list but it seems like the number isn't there";
    }
}