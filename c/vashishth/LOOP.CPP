#include<iostream.h>
#include<conio.h>
main()
{
	int i,j,n;
	cout<<"enter value:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<"****\t"<<j;
		}
	     cout<<"\n\n\n"<<i;
	}
	getch();

}
