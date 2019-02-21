#include<iostream.h>
#include<conio.h>
void main()
{
void swap();
swap();
}

void swap()
{
int a,b;
clrscr();
cout<<"Enter first number A:" ;
cin>>a;
cout<<"Enter number B:";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"the number A is "<<a<<"\n";
cout<<"the number B is "<<b;
getch();
}