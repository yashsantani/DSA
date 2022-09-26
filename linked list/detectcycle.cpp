#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head,int val){
        node* n=new node(val);
        node* temp=head;
        if(head==NULL){
            head=n;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

bool detectcyclye(node* &head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
     return false;
}
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
    
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);

    display(head);
    makecycle(head,3);
    //display(head);
    cout<<detectcyclye(head)<<endl;
    removecycle(head);
    cout<<detectcyclye(head)<<endl;
}