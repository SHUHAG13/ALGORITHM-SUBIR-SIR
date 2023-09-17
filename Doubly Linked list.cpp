#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  Node* prev;
  int data;
  Node* next;

  Node(int x){
      next=NULL;
      data=x;
      prev=NULL;
  }
};
void Insert_at_front(Node* &head, int data){

  Node* newNode = new Node(data);
  newNode->next = head;
  newNode->prev = NULL;
  if (head != NULL)
    head->prev = newNode;
    head = newNode;
}
void Insert_at_after(Node* prev_node, int data){
  if (prev_node == NULL) {
    cout << "previous node cannot be null";
    return;
  }
  Node* newNode = new Node(data);
  newNode->next = prev_node->next;
  prev_node->next = newNode;
  newNode->prev = prev_node;
  if (newNode->next != NULL)
    newNode->next->prev = newNode;
}
void Insert_end(Node* &head, int data){
 Node* newNode = new Node(data);
  newNode->next = NULL;
   Node* temp = head;
  if (head == NULL) {
    newNode->prev = NULL;
    head = newNode;
    return;
  }
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
}
void Delete_node(Node* &head, Node* &del_node){
  if (head == NULL || del_node == NULL)
    return;
  if (head == del_node)
    head = del_node->next;
  if (del_node->next != NULL)
    del_node->next->prev = del_node->prev;
  if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;
  free(del_node);
}

void Display_list(Node* &node){
  Node* last;
  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "NULL\n";
}

int main() {
  Node* head = NULL;
  while(1){
    cout<<"\n***MENU***\n1. Insert_at_front()\n2.Insert end()\n3.Insert_at_after()\n4.Display list\n5.Delete_node\n";
    cout<<"Choose an option:";
        int x;
        cin>>x;
        if(x==1){
            cout<<"Input an element to Insert_at_front: ";
            int a;
            cin>>a;
            Insert_at_front(head,a);
        }
        else if(x==2){
            cout<<"Input an element to insert_end: ";
            int a;
            cin>>a;
            Insert_end(head,a);
        }
        else if(x==3){
            cout<<"Input  an element to Insert_at_after: ";
            int a;
            cin>>a;
             Insert_at_after(head,a);
        }
         else if(x==4){
            system("cls");
            Display_list(head);
        }
        else if(x==5){
             Delete_node(head, head->next->next->next->next->next);
        }
        else{
            cout<<"Please enter a valid integer\n ";
        }

  }
}
