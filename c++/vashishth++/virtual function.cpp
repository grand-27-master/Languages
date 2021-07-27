#include <iostream>
using namespace std;
class student 
{
	public:
	virtual void getdata()
	{
	}	
	virtual void putdata()
	{
    }
};
class scistudent:public student
{
	private:
	int bio,chem,math,phy;
	public:
	void getdata()
	{
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
	student *stu;
	comstudent sc;
	scistudent ss;
	stu=&sc;
	stu->getdata();
    stu->putdata();
	stu=&ss;
	stu->getdata();
	stu->putdata();
	return 0;
}
