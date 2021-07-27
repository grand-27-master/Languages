//linked list operations


/*#include<iostream>
using namespace std;
struct node
{
	int data; // info stored in a node
	struct node* link; //connects to the next node
};
struct node* root=NULL; //creating a pointer which points to head
void add()
{
	struct node* temp,*p; //pointer pointing to root
	int loc,len,i=1; // location and length of list
	cout<<"enter node to add=";
	cin>>loc;
	len=length();
	if(loc>len)
		cout<<"ERROR";
	else
	{
		temp=root;  //temporarily assigning value to head
		while(i<loc)
		{
			p=p->link; //giving value to node
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node)); //creating a new node
		cout<<"enter newnode data=";
		cin>>temp->data;
		temp->link=NULL; //value of link of a new node
		temp->link=p->link; //pointing to new node
		p->link=temp; 
	}
}
void del()
{
	struct node* temp;
	int loc,len;
	cout<<"enter node to delete=";
	cin>>loc;
	len=length();
	if(loc>len)
		cout<<"ERROR";
	else if(loc==1)
	{
		temp=root;
		root=temp->link; //assigning old values to root
		temp->link=NULL; //removing values from old node 
		free(temp); //deleting that node
	}
	else
	{
		int i=1;
		struct node* p,*q; //2 pointers-one pointing to node to be deleted and another to root
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link; 
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
int size(struct node* temp)
{
	temp=root;
	int cnt=0; //initialising a variable to  0
	while(temp!=NULL)
	{
		cnt++;
		temp=temp->link;
	}
	return cnt;
}
void disp()
{
	struct node* temp;
	temp=root;
	while(temp!=NULL)
	{
		temp=temp->link;
		cout<<"elements in list are="<<temp->data;
	}
}
void reverse()
{
	struct node* temp;
	temp=root;
	int loc,len,i=loc+1;
	len=length();
	while(i>NULL)
	{
		temp=temp->link;
		i--;
		cout<<"\nreversed elements are:-"<<temp->data;
	}	
}*/


//stack using linked list

/*#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* link;	
};
struct node* top=NULL;

void push()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	cout<<"enter elements to be added:";
	cin>>temp->data;
	temp->link=top;
	top=temp;
}

void pop()
{
	struct node* temp;
	if(top==NULL)
	cout<<"\nstack is empty";
	else
	{
		temp=top;
		top=top-link;
		temp->link=NULL;
		free(temp);
	}
}

void disp()
{
	struct node* temp;
	temp=top;
	int i=0;
	while(i<top)
	{
		i++;
		cout<<"\nelements are:"<<temp->data;
	}
}*/














