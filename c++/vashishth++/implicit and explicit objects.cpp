#include<iostream>
using namespace std;
class test
{
private:
    int n;
public:
    void get()
    {
        cout<<"enter value=";
        cin>>n;
    }
    void put()
    {
        cout<<"\nvalue="<<n;
    }
    void big(test t2)
    {
        if(n<t2.n)
            cout<<"t2.n is big";
        else
            cout<<"\nt2.n is small";
    }
};
int main()
{
    test t1,t2;
    t1.get();
    t2.put();
    t1.big(t2); //t2 acts as explicit object
    return 0;
}
