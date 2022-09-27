#include<iostream>
using namespace std;
class Book
{
    private:
    char title[30];
    int price;
    int id;
    public:
    void getdata()
    {
        cout<<"enter the book title:";
        cin>>title;
        cout<<"enter the book id:";
        cin>>id;
        cout<<"enter the book price:";
        cin>>price;
    }
    void showdata()
    {
        cout<<"book title:"<<title<<"\n";
        cout<<"book id:"<<id<<"\n";
        cout<<"book price:"<<price<<"\n";
    }
};
int main()
{
Book b[2];
int i;
cout<<"enter data for book:\n";
for(i=0;i<2;i++)
{
    b[i].getdata();
   /* cout<<"\ndisplay data:\n";
    for(i=0;i<=3;i++)*/
    b[i].showdata();
}
return 0;
}