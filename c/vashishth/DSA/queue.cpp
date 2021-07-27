#include<iostream>
#define CAP 5
using namespace std;
int rear=0,front=0,queue[CAP];
void insert()
{
	//int front=0,rear=0,n,queue[5];
	if(rear==CAP)
	cout<<"queue is full";
	else
	{
		cout<<"\nenter element to be inserted=";
		cin>>n;.
		rear++;
		queue[rear]=n
	}
}
void del()
{
	int i;
	if(front==rear)
	cout<<"\nstack is empty";
	else
	{
		cout<<"\ndeleted element="<<queue[front];
		for(i=0;i<rear-1;i++)
		queue[i]=queue[i+1];
	}
}
void disp()
{
	int i;
	if(front==rear)
	cout<<"\nstack is empty";
	else
	{
		cout<<"\nelements in queue:";
		for(i=front;i<rear;i++)
		{
			cout<<"\n"<<queue[i];
		}
	}
}
/*int main()
{
	void insert();
	void del();
	void disp();
	return 0;
}*/
