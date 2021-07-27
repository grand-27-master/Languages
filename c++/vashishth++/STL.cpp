//in general template

//#include<iostream>
//using namespace std;
//
//template<typename T>
//T add(T x, T y)
//{
//	return x+y;
//}
//
//int main()
//{
//	float a=10.1,b=7.2;
//	cout<<add(a,b);
//	return 0;
//}

//a pair template

/*#include<iostream>
using namespace std;
int main()
{
	pair<int,int>p;
	p.first=1;
	p.second=2;
	cout<<p.first<<endl<<p.second;
	return 0;
}*/

//array template

/*#include<iostream>
using namespace std;
int main()
{
	array<int,5>arr={1,2,3,4,5};
	array<int,5>::iterator it;
	for(it=arr.begin();it!=arr.end();it++)
	cout<<*(it)<<endl;
	return 0;
}*/

//dynamic array template

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	for(auto i:v)
	cout<<i<<endl;
	return 0;
}
