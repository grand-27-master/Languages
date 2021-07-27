//inheritance//
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class box
{
	public:
	int add(int a)
	{
		int ans=a+5;
		cout<<"answer ="<<ans;
	}	
};
class box1:public box
{
	public:
	int sub(int c)
	{
		int ans=c-5;
		cout<<"\n\n answer2="<<ans;
	}	
};
int main()
{
	box1 b;
	b.add(5);
	b.sub(10);

	return 0;
}
