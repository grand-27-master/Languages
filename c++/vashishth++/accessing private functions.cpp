#include<iostream>
using namespace std;
class emp
{
private:
    int id;
    char name[10];
    float sal;
    void get()
    {
        cout<<"enter employee details:";
        cout<<"\nid-";
        cin>>id;
        cout<<"\nname:";
        cin>>name;
        cout<<"\nsalary=";
        cin>>sal;
    }
public:
    void put()
    {
        get(); //calling function inside public
        cout<<"\nemployee name:"<<name;
        cout<<"\nemployee id-"<<id;
        cout<<"\nemployee salary="<<sal;
    }
};
int main()
{
    emp e;
    e.put();
    return 0;
}
