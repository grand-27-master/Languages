/*#include<iostream>
using namespace std;
template <class t>
t sum(t arr[], int n) //size has to be int type
{
	int i;
	t tot=0;  //declaring var of t type
	for(i=0;i<n;i++)
	tot=tot+arr[i];
	return tot; 
}
int main()
{
	int x[5]={1,2,3,4,5};
	float y[5]={0.1,0.2,0.3,0.4,0.5};
	cout<<"int sum="<<sum(x,5)<<endl;
	cout<<"float sum="<<sum(y,5);
	return 0;
}*/

#include<iostream>
using namespace std;
template <class t1,class t2>
float sum(t1 a, t2 b)
{
	return a+b;
}

int main()
{
	cout<<"int sum="<<sum(2,3)<<endl;
	cout<<"float sum="<<sum(1.2,4.5);
}


