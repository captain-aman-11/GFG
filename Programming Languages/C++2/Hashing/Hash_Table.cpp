// Implementation of a Hash table using Array

#include <iostream>
using namespace std;

//Initialize a hash table
void init(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = -1;
    }
}

int insert(int arr[], int value, int size)
{
    //Generating Key
    int key = value % size;

    int index = key;

    while (arr[index] != -1)
    {

        index = (index + 1) % size;

        if (index == key)
        {
            cout << "Hash Table is Full" << endl;
            return 0;
        }
    }

    arr[index] = value;
    return 1;
}

int main()
{
    int size;
    cout << "Enter size of Hash Table : " << endl;
    cin >> size;

    //Makng an array of given size
    int arr[size];

    //Initializing array elements with -1
    init(arr, size);

    //Inserting elements into the Hash Table
    insert(arr, 10, size);
    insert(arr, 22, size);
    insert(arr, 23, size);
    insert(arr, 24, size);
    insert(arr, 25, size);
    insert(arr, 26, size);

    for (int arrElement : arr)
    {
        cout << arrElement << " ";
    }
}