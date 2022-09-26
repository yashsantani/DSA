#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *Reverserec(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newhead = Reverserec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
Node *Reverse3p(Node *&head)
{
    Node *pp = NULL;

    Node *current = head;
    // Node *nextptr;
    while (current != NULL)
    {
        Node *nextptr = current->next;
        current->next = pp;
        pp = current;
        current = nextptr;
    }
    return pp;
}
int main()
{
    Node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    print(head);
    cout << endl;
    Node *nh = Reverserec(head);
    print(nh);
    cout << endl;
    Node *np = Reverse3p(nh);
    print(np);
}