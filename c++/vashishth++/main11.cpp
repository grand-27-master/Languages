#include <iostream>
using namespace std;
class distance
{
	private:
	int m,cm;
	public:
	distance()
	{
		m=0;
		cm=0;
	}
	distance(int dis1,int dis2)
	{
		m=dis1;
		cm=dis2;
	}
	/*void get()
	{
		
		cout<<"enter value in metre=";
		cin>>m;
		cout<<"enter value in centimeter=";
		cin>>cm;		
	}*/
	distance operator +(distance d)
	{
		distance tmp;
		tmp.cm=cm+d.cm;
		if(tmp.cm>=100)
		{
			m++;
			tmp.cm=tmp.cm-100;
		}
		tmp.m=m+d.m;
		return distance(tmp.m,tmp.cm);
	}
	void put()
	{
		cout<<"\n\n m="<<m<<"\n cm="<<cm;
	}
};
int main()
{ 
	distance d3;
	distance d1(65,70);
	//d1.get();
	d1.put(80,70);
	distance d2;
	//d2.get();
	d2.put();
	d3=d1+d2;
	d3.put();
	return 0;
}
