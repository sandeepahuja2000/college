#include<iostream.h>
#include<conio.h>
void swap(int &, int &);
void main()
{
int a,b;
clrscr();
cout<<"Enter the values of A ";
cin>>a;
cout<<"Enter the value of B";
cin>>b;
swap(a,b);
getch();
}
void swap(int &a, int &b)
{
a=a+b;
b=a-b;
a=a-b;
cout<<"The swapped value of A is \n "<<a;
cout<<"The swapped value of B is \n "<<b;

}