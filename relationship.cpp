//create two classes fruit and basket.Attributes of class fruits are 'ch' of character type ,num of integer type.Methods of class basket are getdata and showdata 
//class fruit declares class basket as a friend class wap to depict this relationship.
#include<iostream>
using namespace std;
class fruit
{
    public:
    char ch[10];
    int num;
    friend class basket;

};
class basket
{
    public:
    void getdata(fruit &F)
    {
        cout<<"Enter fruit name:";
        cin>>F.ch;
        cout<<"Enter the no of fruits:";
        cin>>F.num;
    }
    void showdata(fruit F)
    {
        cout<<"Fruit name:"<<F.ch<<"\n";
        cout<<"Number of fruits:"<<F.num<<"\n";
    }
};
int main()
{
    basket b1;
    fruit F;
    b1.getdata(F);
    b1.showdata(F);
    return 0;
}
