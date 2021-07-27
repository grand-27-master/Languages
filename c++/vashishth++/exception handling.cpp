/*#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try
	{
		cout<<"enter value of a=\n value of b=";
		cin>>a;
		cin>>b;
		if(b==0)
		{
			throw 0;
		}
		cout<<"\ndivided answer="<<a/b;
	}
	catch(int x)
	{
		cout<<"\nERROR";
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a,b;
		cout<<"enter first value=";
		cin>>a;
		cout<<"enter second value=";
		cin>>b;
		if(a==b)
		{
			cout<<"value of both numbers="<<a<<endl<<b;
			throw 1;	
		}
		else
		throw 0;
	}
	catch(int x)
	{
		cout<<"\nERROR";
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"can handle any data type";
		throw 1;
	}
	catch(...) //keyword 
	{
		cout<<"\ntask done";
	}
	return 0;
}
