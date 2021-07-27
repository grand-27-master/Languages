#include<iostream>
using namespace std;
struct employee
{
    char ename[10];
    int id;
    float sal;
}emp;
int main()
{
    struct employee* p;
    p=&emp;
    cout<<"\t\t******EMPLOYEE DETAILS******";
    cout<<"\n\n\nenter employee name:";
    cin>>p->ename;
    cout<<"\nenter employee id-";
    cin>>p->id;
    cout<<"\nenter employee salary=";
    cin>>p->sal;
    cout<<"\nemployee name:"<<p->ename;
    cout<<"\nemployee id-"<<p->id;
    cout<<"\nemployee salary="<<p->sal;
    return 0;
}
