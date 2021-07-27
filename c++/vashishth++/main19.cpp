#include <fstream>
#include <iostream>
using namespace std;
class student
{
	private:
	int rno;
	char name[10];
	public:
		void showdata()
		{
			cout<<"\n enter rno="<<rno;
			cout<<"\n\n enter name:"<<name;	
		}
};
int main()
{
	student stud;
	ifstream infile("test.txt");
	infile.read((char *)&stud,sizeof(stud));
	stud.showdata();
	return 0;
}
