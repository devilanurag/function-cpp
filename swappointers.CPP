//wap to swap the value using pointers
#include<iostream.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
 int x,y,z;
 clrscr();
 x=10;
 y=20;
 swap(&x,&y);
 getch();

}
void swap(int *a,int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
 cout<<" after swapping:\n the value of \na="<<*a<<"\nb="<<*b;
}