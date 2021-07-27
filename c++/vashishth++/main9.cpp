#include <iostream>
using namespace std;
class price;
class farm
{
	private:
	float h,w;
	public:
	void get()
	{
		cout<<"\n enter height=";
		cin>>h;
		cout<<"\n\n enter width=";
		cin>>w;
	}
	void put()
	{
	 	cout<<"\n\n height is="<<h;
	 	cout<<"\n\n width is="<<w;
	}
	friend float prical(farm,price);
};
class price
{
	private:
	float upri;
	public:
	void get()
	{
		cout<<"\n\n enter price=";
		cin>>upri;
	}	
	void put()
	{
	cout<<"\n\n sq ft price:"<<upri;
    }
    friend float prical(farm f,price p);
};
	float prical(farm f,price p)
	{
		float totpri;
		totpri=(f.h*f.w)*p.upri;
		return totpri;
	}
int main()
{
	float a;
	farm f;
	price p;
	f.get();
	p.get();
	f.put();
	p.put();
	a=prical(f,p);
	cout<<"\n total price of farm="<<a;
	return 0;
}
