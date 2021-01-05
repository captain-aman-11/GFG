#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    //Constructor
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

//Insert Funciton
Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);

    else if (root->key < x)
        root->right = insert(root->right, x);

    else if (root->key > x)
        root->left = insert(root->left, x);

    return root;
}

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;

    else if (root->key == x)
        return true;

    else if (root->key > x)
        return search(root->left, x);

    else if (root->key < x)
        return search(root->right, x);
}

int main()
{
    // Make a tree here
    Node *root = new Node(20);
    insert(root, 12);
    insert(root, 10);

    int x = 10;
    bool ElementExist = search(root, x);
    if (ElementExist)
    {
        cout << "Element " << x << " exists";
    }
    else
    {
        cout << "Element doesn't exist";
    }
    return 0;
}