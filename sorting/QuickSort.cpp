#include<iostream>
using namespace std;
void swapp(int *a,int *b)
{
       int t;
    t=*a;
    *a=*b;
    *b=t;
}
int Partition(int arr[],int low,int high)
{
    int Pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
     if(arr[j]<=Pivot)
     {
            i++;
        swapp(&arr[i],&arr[j]);

     }
    }
    swapp(&arr[i+1],&arr[high]);
    return (i+1);
}

void Quicksort(int arr[],int low ,int high)
{
    if(low<high)
    {
    int pi= Partition(arr,low,high);
    Quicksort(arr,low,pi-1);
    Quicksort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<7;i++)
    {
        cout<< arr[i]<<endl;
    }
}
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    Quicksort(arr,0,6);
    printArray(arr,6);
}
