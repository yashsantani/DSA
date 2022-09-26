#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* previous;

    node(int val){
        data=val;
        next=NULL;
        previous=NULL;
    }
};

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->previous=n;
        }
    head=n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}
void deletetion(node* &head, int val){
    if(head->data==val){
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    node* todelete=temp;
    if(temp->next!=NULL){
        temp->next->previous=temp->previous;}
    temp->previous->next=temp->next;
    delete todelete;

}
void print(node* head){
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
    print(head);
    insertathead(head,5);
    print(head);
    deletetion(head,5);
    //deleteathead(head);
    print(head);
}