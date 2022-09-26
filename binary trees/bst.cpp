#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *buildbst(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = buildbst(root->left, val);
    }
    else
    {
        root->right = buildbst(root->right, val);
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = buildbst(root, 5);
}