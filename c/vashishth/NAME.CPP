#include<iostream.h>
#include<conio.h>
class student
{
private:
	int rno[10],i,amt;
public:
	student()
	{
		amt=0;

	}
	void getdata()
	{
	  for(i=0;i<8;i++)
	  {
		cout<<"\n rno["<<i<<"]=";
		cin>>rno[i];
	   }
	}
	void putdata()
	{
	    for(i=0;i<8;i++)
	    {
		cout<<"\n rno["<<i<<"]="<<rno[i];
		amt=amt+rno[i];
	   }
	cout<<"\n amount="<<amt;
	}
};
void main()
{
	student s;
	clrscr();
	s.getdata();
	s.putdata();
	getch();
}


