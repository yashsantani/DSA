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

Node *build_tree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;

    if (start > end)
    {
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node *root = new Node(curr);

    if (start == end)
    {
        return root;
    }
    int pos = searchar(inorder, curr, start, end);
    root->right = build_tree(postorder, inorder, pos + 1, end);
    root->left = build_tree(postorder, inorder, start, pos - 1);

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
    int preorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = build_tree(preorder, inorder, 0, 4);
    inorderp(root);
}