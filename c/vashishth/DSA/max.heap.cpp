#include<iostream>
using namespace std;
void ins()
{
    int n,ele,i,parent,temp;
    cin>>n;
    int arr[n];
    parent=arr[0]; //initializing parent
    n+=1; //creating memory for new element
    arr[n+1]=ele; //inserting element in new memory
    i=n;
    while(i>0)
    {
        if(arr[parent]<arr[i])
        {
            temp=arr[parent];      //swapping
            arr[parent]=arr[i];
            arr[i]=temp;
        }
        else
            cout<<"no change required";
    }
}

void del()
{
    int n,i,cur,temp;
    cin>>n;
    int arr[n];
    cur=arr[n];
    n-=1;
    i=n;
    while(i<n)
    {
        if(arr[cur]<arr[i])
        {
            temp=arr[cur];
            arr[cur]=arr[i];
            arr[i]=temp;
        }
        else
            cout<<"\nno  change is required";
    }
}
