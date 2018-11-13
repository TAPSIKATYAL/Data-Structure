#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    int mini,pos;
    for(int i=0;i<n;i++)
    {
        mini=i;
     for(int j=i+1;j<n;j++)
        {
         if(arr[j]<arr[mini])
         {
             mini=j;
         }
        }

        int t=arr[mini];
        arr[mini]=arr[i];
        arr[i]=t;
    }
}
int main()
{
    int arr[10],n;
    cout<<"Enter number of Elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
