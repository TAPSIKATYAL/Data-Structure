#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node* top=NULL;
void push(int x)
{
    struct node* temp;
    temp=new(struct node);
    temp->data = x;
    temp->link = top;
    top = temp;
}
void pop()
{
    struct node *temp;
    if(top == NULL) return;
    temp=top;
    top=top->link;
    free(temp);
}
void traverse()
{
    struct node *ptr;
    ptr=top;
    cout<<"Node created"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }
}
int main()
{
    push(10);
    push(7);
    push(5);
    pop();
    push(9);
    push(1);
    traverse();
}
