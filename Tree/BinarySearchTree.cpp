#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
}*root;
node * create(int item)
{
    node *temp=new node;
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node* insert(node *p,node *root)
{
    if(root==NULL)
    {
        root=p;
    }
    else if(root->data<p->data&&root->right==NULL)
    {
        root->right=p;
    }
    else if(root->data<p->data&&root->right!=NULL)
    {
        insert(p,root->right);
    }
    else if(root->data>p->data&&root->left==NULL)
    {
        root->left=p;
    }
    else if(root->data>p->data&&root->right!=NULL)
    {
        insert(p,root->left);
    }
    return root;
}
void pre(node *r)
{
    if(r==NULL)
    {
        return;
    }
    else
    {
    cout<<root->data;
    pre(root->left);
    pre(root->right);
    }
}
int main()
{
    node *p,*r;
    root==NULL;
    int item;
    for(int i=0;i<7;i++)
    {
    cin>>item;
    p=create(item);
    r=insert(p,root);
    root=r;
    }
    pre(root);
}
