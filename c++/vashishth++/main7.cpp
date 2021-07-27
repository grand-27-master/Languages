#include <iostream>
#include<string.h>
using namespace std;
class String
{
	private:
	int len;
	char *name;
	public:
	String()
	{
	len=0;
	name=new char[len+1];
	}
	String(char *s)
	{
		len=strlen(s);
		name=new char[len+1];
		strcpy(name,s);
	}
	void put()
	{
		cout<<"\n\n\n your name is:"<<name;
	}
	void join(String &a ,String &b)
	{
		len=a.len+b.len;
		name=new char[len+1];
		strcpy(name,a.name);
		strcat(name,b.name);
	}
};
int main()
{
	String s1("harsh"),s2("h"),s3("shah"),s4,s5;
	s1.put();
	s2.put();
	s3.put();
	s4.join(s1,s2);
	s5.join(s4,s3);
	s4.put();
	s5.put();
	return 0;
}1
