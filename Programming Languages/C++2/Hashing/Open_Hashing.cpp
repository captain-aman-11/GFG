// Implementation of a Hash Table using Linked List
// Open Hashing or Scope Chaining

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void insert(int value)
{
    struct node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    int key = value % size;

    if (chain[key] == NULL)
    {
        chain[key] = newNode;
    }
    else
    {
        struct node *temp = chain[key];

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main()
{
    int size;
    cout << "Enter Number of Chains : ";
    cin >> size;
    struct node *chain[size];

    // Intializing the nodes
    for (int i = 0; i < size; i++)
    {
        chain[i] = NULL;
    }
}