#include<iostream>
using namespace std;
int main()
{
	int **p,nr,nc,r,c;
	cout<<"enter rows=";
	cin>>nr;
	cout<<"\nenter columns=";
	cin>>nc;
	p= new int*[nr];
	for(r=0;r<nr;r++)
	p[r]= new int[nc];
	cout<<"\nenter elements:";
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			cin>>p[r][c];
		}
	}
	cout<<"\nelements are:";
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			cout<<p[r][c]<<endl;
		}
	}
	delete p;
	return 0;
}