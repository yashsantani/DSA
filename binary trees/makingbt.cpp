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

int main()
{
    struct node *root = new node(1);
    root->right = new node(2);
    root->left = new node(3);
}