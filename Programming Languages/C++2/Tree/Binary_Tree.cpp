//Binary Tree

#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    //InOrder -> Left - Root - Right
    inOrder(root->left);
    cout << (root->key) << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    //PreOrder -> Root - Left - Right
    cout << (root->key) << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    //PostOrder -> Left - Right - Root
    postOrder(root->left);
    postOrder(root->right);
    cout << (root->key) << " ";
}

int getSize(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + getSize(root->left) + getSize(root->right);
}

int getMax(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return max((root->key), max(getMax(root->left), getMax(root->right)));
}

int getHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return max(getHeight(root->left), getHeight(root->right)) + 1;
}

//Driver Program
int main()
{

    // Initializing a Binary Tree
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->right->left = new Node(70);
    root->right->left->right = new Node(80);

    //Tree Traversals

    //1. Breadth First (or Level Order) Traversal
    //2. Depth First Traversal - i. InOrder ii. PreOrder iii. PostOrder

    //InOrder Traversal
    cout << "\n InOrder Traversal : ";
    inOrder(root);

    //PreOrder Traversal
    cout << "\n PrOrder Traversal : ";
    preOrder(root);

    //PostOrder Traversal
    cout << "\n PostOrder Traversal : ";
    postOrder(root);

    //Size of a Binary Tree
    int size = getSize(root);
    cout << "\n\nSize of the Tree is : " << size << endl;

    //Maximum of a binary Tree
    int max = getMax(root);
    cout << "\n\nMaximum of the Tree is : " << max << endl;

    //Height of a binary tree
    int height = getHeight(root);
    cout << "\n\nHeight of the Tree is : " << height << endl;
}