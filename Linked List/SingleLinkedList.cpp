#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*start;
node* create_node(int val)
{
    struct node *temp;
    temp=new(struct node);
    temp->data=val;
    temp->next=NULL;
    return temp;
}void insert_beg()
{
    struct node *p;
    int val;
    cin>>val;
    p=create_node(val);
    if(start==NULL)
    {
    start=p;
    p->next=NULL;
    }
    else
    {
    p->next=start;
    start=p;
    }
}
void insert_before()
{
    struct node *temp,*p,*ptr;
    cout<<"Enter a number before you want to insert";
    int num,val;
    cin>>num;
    cout<<endl<<"Enter a number you want to insert";
    cin>>val;
    p=create_node(val);
    temp=start;
    while(temp->data!=num&&temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    if(start==temp)
    {
        p->next=start;
        start=p;
    }
    else
    {
        p->next=temp;
        ptr->next=p;
    }
}
void insert_after()
{
    struct node *temp,*p;
    cout<<"Enter a number after you want to insert";
    int num,val;
    cin>>num;
    cout<<endl<<"Enter a number you want to insert";
    cin>>val;
    p=create_node(val);
    temp=start;
    while(temp->data!=num&&temp->next!=NULL)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        temp->next=p;
        p->next=NULL;

    }
    else
    {
        p->next=temp->next;
        temp->next=p;
    }
}
void insert_last()
{
    struct node *p,*temp;
    int val;
    cin>>val;
    p=create_node(val);
    temp=start;
   while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    p->next=NULL;
    temp->next=p;
}
void delete_beg()
{
  struct node *temp;
    if(start==NULL)
    {
        cout<<"No node in list";
    }
    else
    {
    temp=start;
    start=temp->next;
    free(temp);
    }
}
void delete_last()
{
    struct node *temp,*ptr;
    temp=start;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
}
void delete_after()
{
    int num;
    cout<<"Enter the value after which node is deleted";
    cin>>num;
    int t=0;
    struct node *temp,*ptr;
    temp=start;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
        if(ptr->data==num)
        {
            ptr->next=temp->next;
            free(temp);
            t=1;
            break;
        }
    }
    if(t==0)
    {
    cout<<"No value with "<<num<<"is found";
    }
}
void traverse()
{
    struct node *ptr;
    ptr=start;
    cout<<"Node created"<<endl;
    while(ptr!=NULL)
    {

        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
main()
{
    /*insert_beg();
    insert_beg();*/
    insert_beg();
    insert_last();
    insert_last();
    insert_last();
    /*insert_before();
    insert_beg();
    insert_after();*/
    //delete_beg();
    //delete_last();
    delete_after();
    traverse();
}
