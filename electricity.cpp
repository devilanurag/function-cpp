#include<iostream>
using namespace std;
class Bill
{
    private:
    char name[30];
    int energy;
    float price;
    public:
    void getdata()
    {
        cout<<"enter the user name:";
        cin>>name;
        cout<<"enter the energy or unit:";
        cin>>energy;
    }
    void showdata()
    {
        cout<<"user name:"<<name<<"\n";
        cout<<"user energy:"<<energy<<"\n";
        if(energy<100)
        cout<<"price of energy:"<<energy*60<<"rs \n";
        else if(energy<200)
        cout<<"price of energy:"<<energy*80<<"rs \n";
        else if(energy>200)
        cout<<"price of energy:"<<energy*92<<"rs \n";
        
    }
};
int main()
{
    Bill b;
    b.getdata();
    b.showdata();
    return 0;
}