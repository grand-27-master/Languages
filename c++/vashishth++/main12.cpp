#include <iostream>
using namespace std;
void disp();
void disp(char);
void disp(char,int);
int main()
{
	disp();
	disp('%');
	disp('*',10);
	return 0;
}
void disp()
{
	int i;
	for(i=1;i<=30;i++)
	{
		cout<<"#";
	}
}
void disp(char ch)
{
	int i;
	for(i=1;i<=40;i++)
	{
		cout<<"\n\n "<<ch;
	}
}
void disp(char ch,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<"\n\n "<<ch;
	}
}
