#include<iostream>
using namespace std;
class employee
{
    private:
    char name[100];
    int id;
    int salary;
    char designation[500];
    public:
    void getdata()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter id:";
        cin>>id;
        cout<<"enter salary:";
        cin>>salary;
        cout<<"enter your designation:";
        cin>>designation;

    }
    void putdata()
    {
        cout<<"Name="<<name<<"\n";
        cout<<"Id="<<id<<"\n";
        cout<<"Salary="<<salary<<"\n";
        cout<<"Designation="<<designation<<"\n";

    }
};
int main()
{
    employee s1,s2;
    s1.getdata();
    s2.getdata();
    s1.putdata();
    s2.putdata();
    return 0;
}
