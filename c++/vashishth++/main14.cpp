#include <iostream>
using namespace std;
void area(float);//circle
void area(int);//square
void area(int,float);//rectangle
void area(float,float);//triangle
int main()
{
	float r,a,b,bs,l1;
	int l;
	cout<<"enter lenght of square=";
	cin>>l;
	area(l);
	cout<<"enter radius=";
	cin>>r;
	area(r);
	cout<<"\n\n\n enter lenght of rect=";
	cin>>l1;
	cout<<"\n\n enter breadth of rect=";
	cin>>b;
	area(l1,b);
	cout<<"\n\n enter base of tri=";
	cin>>bs;
	cout<<"\n\n enter height of tri=";
	cin>>a;
	area(a,bs);
	return 0;
}
void area(int l)
{
	float ans=(float)l*l;
	cout<<"\n\n area of square="<<ans;
}
void area(float r)
{
	float ans=(float)3.14*r*r;
	cout<<"\n\n area of circle="<<ans;
}
void area(int l,float b)
{
	float ans=(float)l*b;
	cout<<"\n\n area of rectangle="<<ans;
}
void area(float a,float bs)
{
	float ans=(float)0.5*a*bs;
	cout<<"\n\n enter area of triangle="<<ans;
}

