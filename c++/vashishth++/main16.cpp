#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int max=50;
	char name[max];
	ifstream infile("test.txt");
	while(infile)
	{
		infile.getline(name,max);
		cout<<"\n\n"<<name;
	}
	return 0;
}
