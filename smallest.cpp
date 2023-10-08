#include <bits/stdc++.h>
using namespace std;
 struct Node{
 int key;
 struct Node*left, *right;
 };
 int c=0;

 struct Node *newnode(int value)
 {
     struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
     temp->key=value;
     temp->left=temp->right=NULL;
     return temp;
 };

 struct Node *insert(struct Node* node,int key)
 {
     if(node==NULL)
     {
         return newnode(key);
     }
     if(key<node->key)
     {
         node->left=insert(node->left,key);
     }
     else
     {
         node->right=insert(node->right,key);
     }
 };

 void secondsmallest(struct Node* root)
 {
     if(root==NULL || c>=2)
        return;
     secondsmallest(root->left);
     c++;

     if(c==2)
     {
         cout<<"2nd smallest element is "<<root->key;
         return;
     }
     secondsmallest(root->right);
 }

 int main()
 {
     struct Node* root=NULL;
     root=insert(root,5);
     root=insert(root,10);

     root=insert(root,7);

     root=insert(root,8);
     root=insert(root,65);

     root=insert(root,13);

secondsmallest(root);
 }
