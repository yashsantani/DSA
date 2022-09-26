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
int sumrep(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int currval = root->data;
    int lfsum = sumrep(root->left);
    int rsum = sumrep(root->right);
    root->data = lfsum + rsum + currval;
    return root->data;
}
void levelorder(struct Node *root)
{
    static int c = 0;
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *root = q.front();
        q.pop();
        if (root != NULL)
        {
            cout << root->data << " ";
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }
        else if (!q.empty())
        {
            c++;
            q.push(NULL);
        }
    }
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
    sumrep(root);
    levelorder(root);
}