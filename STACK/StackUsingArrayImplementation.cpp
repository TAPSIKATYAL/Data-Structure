#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x)
{
    if(top==MAX_SIZE -1)
    {
        cout<<("Error : Stack Overflow");
        return;
    }
        top++;
        A[top]=x;
}
void pop()
{
    if(top==-1)
    {
        cout<<"No elements in array";
        return;
    }
       top=top-1;
}
int topfun()
{
        return A[top];
}
void print()
{
    int i;
    for(int i=0;i<=top;i++)
    {
     cout<<A[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
push(2);print();
push(10);print();
push(7);print();
pop();print();
push(19);print();
pop();print();
pop();print();
}
