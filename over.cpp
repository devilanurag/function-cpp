#include<iostream>
using namespace std;
class piggy
{
    
 public:
 int amount;
 piggy()
 {
   amount=50;
 }
 piggy(int x)
 {
    amount=50+x;
 }
 void display()
 {
    cout<<"total amount=\n"<<amount;
 }
};
int main()
{
    piggy d1,d2(100);
    d1.display();
    d2.display();
    return 0;
}
