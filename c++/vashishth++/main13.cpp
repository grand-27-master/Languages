//late binding and eraly binding//
#include <iostream>
using namespace std;
class student 
{
	private:
	       int rolln;
	       char nm[10];
	public:
	virtual void getdata()
	{
		cout<<"\nenter rollnumber";
		cin>>rolln;
		cout<<"\n enter name:";
		cin>>nm;
	}	
	virtual void putdata()
	{
		cout<<"\n roll number="<<rolln;
		cout<<"\n your name:"<<nm;
    }
};
class scistudent:public student
{
	private:
	int bio,chem,math,phy;
	public:
	void getdata()
	{
		student::getdata();
		cout<<"\n\n bio=";
		cin>>bio;
		cout<<"\n\n chem=";
		cin>>chem;
		cout<<"\n\n math=";
		cin>>math;
		cout<<"\n\n phy=";
		cin>>phy;
	}
	virtual void putdata()
	{
		student::putdata();
		cout<<"\n\n bio="<<bio;
		cout<<"\n\n chem="<<chem;
		cout<<"\n\n math="<<math;
		cout<<"\n\n phy="<<phy;
		
	}
};
class comstudent:public student
{
	private:
	int acc,eco,stat;
	public:
	void getdata()
	{
		student::getdata();
		cout<<"\n\n acc=";
		cin>>acc;
		cout<<"\n\n eco=";
		cin>>eco;
		cout<<"\n\n stat=";
		cin>>stat;
	}	
	 virtual void putdata()
	 {
	 	student::putdata();
	 	cout<<"\n\n acc="<<acc;
		cout<<"\n\n eco="<<eco;
		cout<<"\n\n stat="<<stat;
	 }
};
int main()
{
	char ch;
	int i;
	student *stu[5];
	comstudent *sc;
	scistudent *ss;
	
	for(i=0;i<4;i++)
	{
		cout<<"\n enter choice:";
		cin>>ch;	
		if(ch=='c')
		{
			//stu=&sc;
			sc=new comstudent;
			sc->getdata();
			sc->putdata();
		}
		if(ch=='s')
		{
			//stu=&ss;
			ss=new scistudent;
			ss->getdata();
			ss->putdata();
		}
	}
	return 0;
}
