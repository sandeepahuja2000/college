#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,c;
clrscr();
printf("enter any 10 elements");
for(i=0;i<=9;++i)
{
	printf("a[%d]",i);
	scanf("%d",&a[i]);
}
c=a[0];
for(i=1;i<=9;++i)
		{  if(c<a[i])
		c=a[i];

		}


	  printf("the largest number is %d",c);
	  getch();
	  }
