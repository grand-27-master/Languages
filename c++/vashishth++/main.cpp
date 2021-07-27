#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Box
{
	public:
		void cal(int a)
		{
			int ans=a+10;
			cout<<"answer"<<ans;			
		}
		void cal(int a,int b)
		{
			int ans=a-b;
			cout<<"\n\n answer="<<ans;
		}		
		void cal()
		{
			int ans=10*2;
			cout<<"\n\n answer="<<ans;
		}	
};	
int main() 
{
	Box b;
	b.cal(10);
	b.cal(10,5);
	b.cal();
	return 0;
}
