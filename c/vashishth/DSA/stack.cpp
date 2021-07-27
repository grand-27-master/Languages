//stack operations

#include<iostream>
#define CAP 5
using namespace std;
int stack[CAP];
int top=-1;
void push()
{
	int n;
	if(isFull())
	cout<<"stack is full";
	else
	{	
		top++;
		cout<<"\nenter element=";
		cin>>n;
		stack[top]=n;
	}
}
void isFull()
{
	if(top==CAP-1)
	return 1;
	else
	return 0;
}
int pop()
{
	if(isEmpty())
	cout<<"\nstack is empty";
	else
	{
		cout<<"\ndeleted element="<<stack[top];
		n=stack[top];
		top--;
	}
	return top;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void disp()
{
	int i;
	if(isEmpty())
	cout<<"\nstack is empty";
	else
	{
		cout<<"\nelements are:";
		for(i=0;i<=top;i++)
		{
			cout<<stack[i];
		}
	}
}
int peek()
{
	if(isEmpty())
	cout<<"\nstack is empty";
	else
	return stack[top];
	
}
