#include<iostream>
using namespace std;
class circle
{
	public:
		int r;
		circle() //default
		{
			cout<<"enter radius=";
			cin>>r;
		}
		circle(int r) //parametised
		{
			(*this).r=r;
		}
		void area()
		{
			cout<<"\narea="<<3.14*r*r;
		}
		
};
int main()
{
	circle c1;
	circle c2(10);
	c1.area();
	c2.area();
	return 0;
}
