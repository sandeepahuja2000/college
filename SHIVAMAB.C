#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[10];
clrscr();

printf("Problem statement\nwrite a program to print even numbers out of 10 number using array \nName Shivam Soni \nEnrollment No. = 0187cCS18105 \nLab-1 \nprogram-1\n");
printf("Enter the elements");
for(i=0;i<=9;i++)
{printf("\na[%d] = ",i);
scanf("%d",&a[i]);
}
printf("\nthe even elements are\n");
for(i=0;i<=9;i++){
if(a[i]%2==0)
printf("%d ",a[i]);
}
getch();
return 0;
}