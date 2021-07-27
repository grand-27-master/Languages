//constructor//
#include <iostream>
using namespace std;
class emp
{
	private:
		static int totemp;
	    int empn;
		float sal;
		char nm[10];
	public:
			emp()
			{
				totemp++;
				empn=totemp;
			}
	void getdata()
	{
		
		cout<<"\n\n enter salary=";
		cin>>sal;
		cout<<"\n\n enter your name:";
		cin>>nm;
	}		
	void putdata()
	{
		cout<<"\n emp number is="<<empn;
		cout<<"\n emp name is:"<<nm;
		cout<<"\n emp salary ="<<sal;
	}
	static void gettot()
	{
		 cout<<"\n total emp="<<totemp;
	}		
};
int emp::totemp;
int main() 
{
	
	emp e,e2;
	e.getdata();
	e2.getdata();
	emp::gettot();
	emp e3;
	e3.getdata();
	emp e4;
	e4.getdata();
	e.putdata();
	e2.putdata();
	e3.putdata();
	e4.putdata();
	emp::gettot();
	return 0;
}
