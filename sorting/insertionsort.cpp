#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int key,i;
    for(int j=1;j<n;j++)
    {
     key=arr[j];
     i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            arr[i]=key;
            i=i-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    insertion(a,n);
}
