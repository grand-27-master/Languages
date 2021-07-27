#include <fstream>
#include<string.h>
using namespace std;
int main() 
{
	char name[20]="HELLO";
	int i;
	ofstream outfile("test.txt");
	for(i=0;i<strlen(name);i++)
	{
		outfile.put(name[i]);
	}
	return 0;
}
