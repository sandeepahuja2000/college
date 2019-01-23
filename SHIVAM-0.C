#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,i,a[10];
clrscr();

printf("write a program to print average of 10 numbers in array \n Shivam Soni \n Lab-1 \n program-1\n");

for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++){
sum=sum+a[i];
}
for(i=0;i<=9;i++){
printf("%d ",a[i]);
}
printf("average = %d",sum);

getch();
return 0;
}