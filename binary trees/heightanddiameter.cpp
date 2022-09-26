#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ld = diameter(root->left);
    int rd = diameter(root->right);

    int lh = height(root->left);
    int rh = height(root->right);

    return max(max(ld, rd), lh + rh + 1);
}
int ondiameter(Node *root, int *hgt)
{
    if (root == NULL)
    {
        *hgt = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = ondiameter(root->left, &lh);
    int rd = ondiameter(root->right, &rh);
    int currd = lh + rh + 1;
    *hgt = max(lh, rh) + 1;

    return max(max(ld, rd), currd);
}

int main()
{
    struct Node *root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->left->left = new Node(8);
    cout << height(root) << endl;
    cout << diameter(root) << endl;
    int hgt = 0;
    cout << ondiameter(root, &hgt);
}