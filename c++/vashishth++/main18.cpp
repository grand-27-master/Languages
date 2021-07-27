#include<iostream>
#include <fstream>
using namespace std;
class student
{
	private:
	int rno;
	char name;
	public:
		void getdata()
		{
			cout<<"\n enter rno=";
			cin>>rno;
			cout<<"\n\n enter name:";
			cin>>name;	
		}
};
int main()
{
	student stu;
	stu.getdata();
	ofstream outfile("test.txt");
	outfile.write((char *)&stu,sizeof(stu));
	return 0;
}
