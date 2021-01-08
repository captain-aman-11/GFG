#include <iostream>
using namespace std;
// In BST -> Left Side - Smaller Elements , Right Side -> Larger or Greater Elements

struct Node
{
    int key;
    Node *left, *right;

    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

Node *insert(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    else if (root->key > x)
    {
        root->left = insert(root->left, x);
    }
    else if (root->key < x)
    {
        root->right = insert(root->right, x);
    }

    return root;
}

int main()
{
    Node *root = new Node();
    insert(20);
    insert(15);
    insert(30);
    insert(40);
    insert(50);
    insert(12);
    insert(18);
    insert(35);
    insert(80);
    insert(7);
}