#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b,i,n=0;
clrscr();
printf("\t program devloped by sandeep ahuja\n\t enrollment number=0187CS181125 ");
printf("enter 10 numbers of array");
for(i=0;i<=9;i++)
	{
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);

	}
printf("enter any number");
scanf("%d",&b);
for(i=0;i<=9;i++)
	{
	if(b==a[i])
	 {
	 printf("the number exist at %d",i);
	 n++;
	 break;
	 }
	}
	 if(n==0)
	{
	printf("the number does not exist");

	}

     getch();
}