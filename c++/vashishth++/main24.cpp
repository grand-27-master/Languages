#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=2.3;
	cout<<"before try";
	try
	{
		cout<<"inside try";
		if(x<0)
		{
			throw x;
			cout<<"after throw";
		}	
		else if(x==2.3)
		{
			throw x;
		}
		else if(x=='k')
		{
			throw x;
		}
	}
	catch(int x)
	{
		cout<<"int exception catch";
	}
	catch(float x)
	{
		cout<<"float exception catch";
	}
	catch(char x)
	{
		cout<<"char exception catch";
	}
	
	cout<<"after catch";
	return 0;
}
