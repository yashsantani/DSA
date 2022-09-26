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
int searchar(int inorder[], int curr, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *build_tree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node *root = new Node(curr);

    if (start == end)
    {
        return root;
    }
    int pos = searchar(inorder, curr, start, end);
    root->left = build_tree(preorder, inorder, start, pos - 1);
    root->right = build_tree(preorder, inorder, pos + 1, end);

    return root;
}

void inorderp(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderp(root->left);
    cout << root->data;
    inorderp(root->right);
}
int main()
{
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    Node *root = build_tree(preorder, inorder, 0, 6);
    inorderp(root);
}