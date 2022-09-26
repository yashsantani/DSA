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
        right = NULL;
        left = NULL;
    }
};

void Vo(Node *root, int hdis, map<int, vector<int>> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[hdis].push_back(root->data);
    Vo(root->left, (hdis - 1), m);
    Vo(root->right, (hdis + 1), m);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    int hdis = 0;

    map<int, vector<int>> m;

    Vo(root, hdis, m);

    map<int, vector<int>>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < it->second.size(); i++)
        {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
}