#include<bits/stdc++.h>
using namespace std;
class node{
 public:
     int data;
     node* next;
     node(int x){
         data=x;
         next=NULL;
     }
};
void insertAtHead(node* &head,int x)
{
    node* newNode=new node(x);
    if(head==NULL)
    {
        newNode->next=newNode;
        head=newNode;
        return;

    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    head=newNode;
}

void insertAtTail(node* &head,int x)
{
    if(head==NULL)
    {
        insertAtHead(head,x);
        return;
    }
     node* newNode=new node(x);
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
   temp->next=newNode;
   newNode->next=head;

}
void deleteAtHead(node* &head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp-temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos)
{
    node* temp=head;
    int cnt=1;
    if(pos==1)
     {
         deleteAtHead(head);
         return;

     }

    while(cnt!=pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* &head)
    {
        cout<<"Current linked list: ";
        node* temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl<<endl;

   }

int main()
{
    node* head=NULL;
    while(1)
    {
        cout<<"\n***Menu***\n1.Choose 1 for insertAtHead\n2.Choose 2 for insertAtTail\n3.Choose 3 for deletion\n4.Choose 4 for display\n5.Choose 5 to sort 6. choose 6  for program exist\n";
        cout<<"Choose an option:";
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int a;
            cout<<"Enter a value:";
            cin>>a;
            insertAtHead(head,a);
        }
        else if(ch==2)
        {
            int b;
            cout<<"Enter a value:";
            cin>>b;
            insertAtTail(head,b);

        }
        else if(ch==3)
        {
            int pos;
            cout<<"Enter the position to delete the value:";
            cin>>pos;
            deletion(head,pos);
        }
        else if(ch==4)
        {
            system("cls");
            display(head);
        }
        else if(ch==6){
            cout<<"Program exist...";
            break;
        }

        else{
             cout<<"Please enter a valid integer\n ";
        }
    }

}
