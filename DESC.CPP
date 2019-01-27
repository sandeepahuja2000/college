#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i=0,j;
clrscr();
printf("enter any 10 values of array\n");
for(i=0;i<=9;++i)
  {	printf("a[%d]=",i);
	scanf("%d",&a[i]); }
for(i=0;i<=9;++i)
  { for(j=i+1;j<=9;++j)
   {
     if(a[i]<a[j])
     {
     a[i]=a[i]+a[j];
     a[j]=a[i]-a[j];
     a[i]=a[i]-a[j];
     }
     }
     }

	printf("the numbers are assigned in descending order\n");
	for(i=0;i<=9;++i)
	{
		printf("%d\n",a[i]);
		}
     getch();
     }