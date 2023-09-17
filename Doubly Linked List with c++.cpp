#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* prev;
    node* next;
    node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void insertAtHead(node* head,int x)
{
    node* newNode=new node(x);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    head->prev=newNode;
    head=newNode;

}
void insertAtTail(node* head,int x)
{
    if(head==NULL)
    {
        insertAtHead(head,x);
        return ;
    }
    node* newNode=new node(x);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;

}
void display(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;

    insertAtTail(head,10);
     insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
      display(head);
insertAtHead(head,50);
       display(head);


    return 0;
}
