#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void r_data()
    {
        cout << "enter the value of x:";
        cin >> x;
    }
};
class B : public A
{
public:
    int y;
    void getdata()
    {
        cout << "enter the value of y:";
        cin >> y;
    }
};
class C
{
public:
    int z;
    void read()
    {
        cout << "enter the value of z:";
        cin >> z;
    }
};
class D : public B, public C
{
public:
    void result()
    {
        cout << "the sum of three no.s= " << (x + y + z);
    }
};
int main()
{
    D obj;
    obj.r_data();
    obj.read();
    obj.getdata();
    obj.result();
    return 0;
}
