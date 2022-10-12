#include<iostream>
using namespace std;
class A
{
    private:
    int length,width,height,vol,ar;
    public:
    void display()
    {
        cout<<"enter length:";
        cin>>length;
        cout<<"enter width:";
        cin>>width;
        cout<<"enter height:";
        cin>>height;
        vol=length*width*height;
        cout<<"volume of box:"<<vol;

    }
    void show()
    {
         cout<<"\nenter length:";
        cin>>length;
        cout<<"enter width:";
        cin>>width;
        ar=0.5*length*width;
        cout<<"area of triangle :"<<ar;
    }
    


};
int main()
    {
        A obj;
        obj.display();
        obj.show();
        return 0;
    }