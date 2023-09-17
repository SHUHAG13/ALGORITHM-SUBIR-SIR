#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void printlevelorderTraversal(node* root)
{
    if(root==NULL)return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* newNode=q.front();
        q.pop();
        if(newNode!=NULL){
        cout<<newNode->data<<" ";
        if(newNode->left)q.push(newNode->left);
        if(newNode->right)q.push(newNode->right);
        }
       else if(!q.empty()){
        q.push(NULL);
        }
     }
  }
void postorder(node* root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//pre order traversal.....
void preorder(node* &root){
    if(root==NULL)return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
//inorder traversal.....
void inorder(node* &root)
{
    if(root==NULL) return ;

    inorder(root->left);
     cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
 node* root=new node(1);
 root->left=new node(2);
 root->right=new node(3);
 root->left->left=new node(4);
 root->left->right=new node(5);
 root->right->left=new node(6);
 root->right->right=new node(7);
 cout<<"After levelorder traversal: ";
 printlevelorderTraversal(root);

 /*
  cout<<"Preorder traversal: ";
 preorder(root);
  cout<<endl<<endl<<" Inorder traversal: ";
  inorder(root);

 cout<<endl<<endl<<"Postorder traversal: ";
  postorder(root);
*/



}
