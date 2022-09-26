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
void rightview(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *root = q.front();
            q.pop();
            if (i == n - 1)
            {
                cout << root->data;
            }
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }
    }
}
void leftview(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *root = q.front();
            q.pop();
            if (i == 0)
            {
                cout << root->data;
            }
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
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
    rightview(root);
    cout << endl;
    leftview(root);
}