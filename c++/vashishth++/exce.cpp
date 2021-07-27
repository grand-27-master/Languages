#include <iostream>
#include<conio.h>
using namespace std;
void test(int x)
{
		/*if(x==0)
		{
			throw 'x';
			cout<<"\n throw 0";
		}	
		else*/ if(x==-1)
		{
			throw 1.1;
			cout<<"\n throw 1.1";
		}
		else if(x==1)
		{
			throw 1;
			cout<<"\n throw 1";
		}
}
int main()
{
	int x=-1;
	cout<<"\nbefore try";
	try
	{
		cout<<"\ninside try";
		//cout<<"\nx==0";
		//test(0);
		//cout<<"\nx==1";
		//test(1);
		cout<<"\nx==-1";
		test(-1);
		cout<<"\nx==2";
		test(2);
		cout<<"\ninside try";
	}
	/*catch(int x)
	{
		cout<<"\nint exception catch";
	}*/
	catch(float x)
	{
		cout<<"\nfloat exception catch";
	}
	catch(char x)
	{
		cout<<"\nchar exception catch";
	}
	
	cout<<"\nafter catch";
	return 0;
}
