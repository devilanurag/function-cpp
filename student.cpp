//wap to create a class student having datamember rollno,name,and percentage as instance data member and 
//count as static data member.The count should represent the no. of objects created.
//Create a static function which will return the no of objectas created.
#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    int roll;
    float percentage;
    static int count;
    public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter your roll:";
        cin>>roll;
        cout<<"Enter your percentage:";
        cin>>percentage;

    }
    void showdata()
    {
        cout<<"Student Name:"<<name<<"\n";
        cout<<"Student Roll:"<<roll<<"\n";
        cout<<"Student Percentage:"<<"\n";
    }
    static int counting()
    {
        return count;
    }
    student()
    {
    count++;
    }
};
 int student::count=0;
 int main()
 {
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.showdata();
    s2.showdata();
    cout<< "the total no of count is:"<<student::counting();
    return 0;
 }
