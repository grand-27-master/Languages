#include<iostream>
using namespace std;
int main()
{
	int n,i,cnt=0;
	cout<<"enter number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		//cnt++;
		if(n%i==0)
		{
			//cout<<"not a prime";
			cnt++;
		}	
	}
	if(cnt==2)
	{
		printf("\nprime number");
	}
	else
	{
		printf("\nnot a prime number");
	}
	return 0;
}
