#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
struct node *prev;
struct node *next;
int data;
}*start;
node* create_node(int val)
{
    struct node *temp;
    temp=new(struct node);
    temp->data=val;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
void insert_last()
{
    int val;
    cin>>val;
    struct node *temp,*p;
    p=create_node(val);
    if(start==NULL)
    {
        start=p;
    }
    else
    {
     temp=start;
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    p->prev=temp;
    p->next=NULL;
    temp->next=p;
    }
}
void insert_beg()
{
    int val;
    cin>>val;
    struct node *p,*temp;
    p=create_node(val);
    if(start==NULL)
    {
        start=p;
    }
    else
    {
    temp=start;
    start=p;
    p->next=temp;
    p->prev=NULL;
    temp->prev=p;

    }
}
void insert_after()
{
    struct node *p,*temp;
    int val,num;
    cout<<"Enter value to create node";
    cin>>val;
    p=create_node(val);
    cout<<"enter number after you want to create";
    cin>>num;
    temp=start;
    while(temp->data!=num)
    {
       temp=temp->next;
    }
    if(temp->next!=NULL)
    {
    p->prev=temp;
    temp->next->prev=p;
    p->next=temp->next;
    temp->next=p;
    }
    else
    {
    temp->next=p;
    p->prev=temp;
    }
}
void insert_before()
{
    struct node *p,*temp;
    int val,num;
    cout<<"Enter value to create node";
    cin>>val;
    p=create_node(val);
    cout<<"enter number before you want to create";
    cin>>num;
    temp=start;
    if(temp->data!=num)
    {
        while(temp->data!=num)
        {
        temp=temp->next;
        }
        p->prev=temp->prev;
        p->next=temp;
        p->prev->next=p;
    }
    else
    {
        temp->prev=p;
        p->next=temp;
        start=p;
    }
}
void traverse()
{
    struct node *temp;
    temp=start;
    cout<<"Node Created"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void delete_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        cout<<"No node in list";
    }
    else
    {
        start=temp->next;
    temp->next->prev=NULL;
    free(temp);
    }
}
void delete_last()
{
    struct node *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
}
void delete_before()
{
    struct node *temp,*ptr;
cout<<"Enter a number before you want to delete";
int num;
cin>>num;
temp=start;
while(temp->data!=num&&temp->next!=NULL)
{
    ptr=temp;
    temp=temp->next;
}
temp->prev=ptr->prev;
ptr->prev->next=ptr->next;

}
void delete_after()
{
    struct node *temp,*ptr;
    int num;
    cout<<"Enter number after you want to delete it";
    cin>>num;
    temp=start;
    while(temp->data!=num&&temp->next!=NULL)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        cout<<"NO number is found";
    }
    else
    {
           ptr=temp->next;
           ptr->prev=temp;
           temp->next=ptr->next;
    }
}
int main()
{
/*insert_beg();
insert_beg();
insert_beg();*/
insert_last();
insert_last();
insert_last();
insert_last();
insert_last();
//insert_after();
//insert_before();
//delete_beg();
//delete_last();
//delete_before();
delete_after();
traverse();
}
