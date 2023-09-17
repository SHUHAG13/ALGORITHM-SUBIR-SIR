
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
//A function to push the element at the begin of the linked list
void push_begin(node* &head,int x){
    node* newNode=new node(x);
    if(head==NULL){
        cout<<"Linked list is empty!!!";
        return;
    }
   newNode->next=head;
   head=newNode;
}
//A function to push the element at middle any position of the linked list
void push_mid(node* &head,int x,int pos){
    node* newNode=new node(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp=head;
    pos=pos-2;
    while(pos--){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
//A function to push the element at the end of the linked list
void push_end(node* &head,int x){
    node* newNode=new node(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
//A function to delete the element from the linked list
void delation(node* &head,int pos){
    node* temp=head;
    if(pos==1){
        head=temp->next;
    }
    else{
        pos=pos-2;
    while(pos--){
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=temp2->next;
    }


}
//A function to sort the linked list
void  selectionSort(node* &head)
{

    node *i,*j;
    int temp;
    for(i=head;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}

//A function to display the linked list
void traverse(node* head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
node* head=NULL;
    while(1){
        cout<<"\n***MENU***\n1.Insert end\n2.Insert begin\n3.Insert mid\n4.travers \n5.delete\n6.Exist\n7.Sort\n";
        int x;cin>>x;
        if(x==2){
            cout<<"Input elemet to insert: ";
            int a;cin>>a;
            push_begin(head,a);
        }
        else if(x==1){
            cout<<"Input elemet to insert: ";
            int b;cin>>b;
            push_end(head,b);
        }
        else if(x==3){
            cout<<"Input elemet to insert: ";
            int c;cin>>c;
            int pos;
            cout<<"Position:";
            cin>>pos;
            push_mid(head,c,pos);
        }
        else if(x==4){
            system("cls");
            cout<<"Atfer traversing:";
          traverse(head);
        }
        else if(x==5){
            int d;
            cout<<"Enetre deleting position:";
            cin>>d;
            delation(head,d);
        }
         else if(x==7){

            cout<<"Atfer sorting:";
          selectionSort(head);
          traverse(head);
        }

        else if(x==6){
            cout<<"Program exist...";
            break;
        }
        else{
             cout<<"Please enter a valid integer\n ";
        }
}
}
