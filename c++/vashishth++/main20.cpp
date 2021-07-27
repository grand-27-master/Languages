#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student
{
	private:
	int rno;
	char name[10];
	public:
	void getdata()
	{
		cout<<"enter rno=";
		cin>>rno;
		cout<<"\n\n enter name:";
		cin>>name;
	}	
	void putdata()
	{
		cout<<"\n\n rno="<<rno;
		cout<<"\n\n name:"<<name;
	}
};
int main()
{
	char choice;
	student stu;
	fstream file;
	file.open("test.txt",ios::out|ios::in|ios::app);
	do
	{
		stu.getdata();
		file.write((char *)&stu,sizeof(stu));
		cout<<"\n\n enter choice:";
	}
	while(choice=='h');
	file.seekg(0);
	file.read((char *)&stu,sizeof(stu));
	while(!file.eof())
	{
		stu.putdata();
		file.read((char *)&stu,sizeof(stu));
	}	
	return 0;
}
