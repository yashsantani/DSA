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
void inorder(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    inorder(head->left);
    cout << head->data << " ";
    inorder(head->right);
}
bool isheap(Node *head)
{
    queue<Node *> q;
    q.push(head);
    bool check = false;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp->left)
        {
            if (check || temp->data < temp->left->data)
            {
                return false;
            }
            q.push(temp->left);
        }
        else
        {
            check = true;
        }

        if (temp->right)
        {
            if (check || temp->data < temp->right->data)
            {
                return false;
            }
            q.push(temp->right);
        }
        else
        {
            check = true;
        }
    }
    return true;
}
int main()
{
    Node *head = new Node(100);
    head->left = new Node(40);
    head->right = new Node(50);
    head->left->left = new Node(10);
    head->left->right = new Node(15);
    head->right->left = new Node(50);
    head->right->right = new Node(40);
    inorder(head);
    cout << isheap(head);
}