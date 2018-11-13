#include<iostream>
using namespace std;
struct node
{
int data;
node *left;
node *right;
};
node *create(int item)
{
    node *temp=new node;
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node* insert(node *r,int item)
{
    if(r==NULL)
    {
        return create(item);
    }
    if(item< r->data)
    {
        r->left=insert(r->left,item);
    }
    else if(item >r->data)
    {
      r->right=insert(r->right,item);
    }
    return r;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<"\n";
        inorder(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    inorder(root);
}
