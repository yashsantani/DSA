#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void levelorder(struct node *root)
{
    static int c = 0;
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *root = q.front();
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
    cout << c + 1;
}

int main()
{
    struct node *root = new node(1);
    root->right = new node(3);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->left->left = new node(8);
    levelorder(root);
}