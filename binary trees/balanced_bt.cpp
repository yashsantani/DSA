#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right;
    struct Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->right);
    int rh = height(root->left);
    return max(lh, rh) + 1;
}
bool balanced_bt(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (balanced_bt(root->left) == false)
    {
        return false;
    }
    if (balanced_bt(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(4);
    cout << balanced_bt(root);
}