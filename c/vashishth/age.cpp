#include <iostream>
using namespace std;
int main()
{
	int y1,m1,y2,m2,age_years,age_months;
	cout<<"enter current year and month:";
	cout<<"\nenter year=";
	cin>>y1;
	cout<<"\nenter month=";
	cin>>m1;
	cout<<"\n\nenter your birthyear and birthmonth:";
	cout<<"\nenter birth year=";
	cin>>y2;
	cout<<"\nenter birth month=";
	cin>>m2;
	cout<<"\nyour current age in years=";
	age_years=y1-y2;
	cout<<age_years;
	cout<<"\nyour current age in months=";
	cout<<age_months;
	
	return 0;
}
