#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void delteathead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL || head->data == val)
    {
        delteathead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node *reverse(node *&head)
{
    node *previousptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = previousptr;

        previousptr = currptr;
        currptr = nextptr;
    }
    return previousptr;
}

node *reverserec(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverserec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node *revk(node *&head, int k)
{

    node *previousptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = previousptr;

        previousptr = currptr;
        currptr = nextptr;

        count++;
    }
    if (head != NULL)
    {
        head->next = revk(nextptr, k);
    }
    return previousptr;
}
int count(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
node *append_k_nodes(node *&head, int k)
{
    node *temp = head;
    node *newhead;
    node *newtail;
    int l = count(head);
    int m = 1;
    k = k % l;
    while (temp->next != NULL)
    {
        if (m == (l - k))
        {
            newtail = temp;
        }
        if (m == (l - k + 1))
        {
            newhead = temp;
        }
        m++;
        temp = temp->next;
    }
    temp->next = head;
    newtail->next = NULL;
    return newhead;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *removeDuplicates(node *llist)
{
    node *head = llist;
    while (head->next != NULL)
    {
        if (head->data == head->next->data)
        {
            node *todel = head->next;
            head->next = head->next->next;
            delete (todel);
        }
        else
            head = head->next;
    }
    return llist;
}
node *accenture(node *head, int n)
{
    int sum = 0;
    node *temp = head;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    temp = head;
    while (sum >= n)
    {
        sum -= temp->data;
        temp = temp->next;
    }
    return temp;
}
int main()
{
    node *head = NULL;
    // insert_at_tail(head,1);
    // insert_at_tail(head,2);
    // insert_at_tail(head,3);
    // insert_at_head(head,4);
    // print(head);
    // deletion(head,3);
    // delteathead(head);
    // print(head);
    // node* newhead=reverserec(head);
    // print(newhead);
    insert_at_tail(head, 13);
    insert_at_tail(head, 12);
    insert_at_tail(head, 11);
    insert_at_tail(head, 9);
    insert_at_tail(head, 4);
    insert_at_tail(head, 1);
    // insert_at_tail(head, 4);
    // insert_at_tail(head, 5);
    node *z = accenture(head, 15);
    print(z);
    // head = removeDuplicates(head);
    // print(head);
    // int k=4;
    // node* newhead=revk(head,k);
    // print(newhead);
    // node* newhead=
    // deletion(head, 1);
    print(head);
}