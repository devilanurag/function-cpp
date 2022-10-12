#include<iostream>
using namespace std;
 class Ban;
class Anu
{
    int number;
    public:
    Anu(int x)
    {
        number=x;
    }
    void friend greatest(Anu a1,Ban b1);
};
 
class Ban
{
    int number;
    public:
    Ban(int x)
    {
        number=x;
    }
    void friend greatest(Anu a1,Ban b1);
};
  
void greatest(Anu a1,Ban b1)
{
    if(a1.number>b1.number)
    {
        cout<<"\n Number in class A is greatest i.e. "<<a1.number;
    }
    else if(a1.number<b1.number)
    {
        cout<<"\n Number in class B is greatest i.e. "<<b1.number;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
 
int main()
{
    cout<<"\n\n Program to find greatest of two numbers in two different classes using friend function";
    
    int num;
 
    cout<<"\n\n Enter number for class Anu - ";
    cin>>num;
    Anu a1(num);
 
    cout<<"\n Enter number for class Ban - ";
    cin>>num;
    Ban b1(num);
 
    greatest(a1,b1);
    cout<<"\n";
 
    return 0;
}