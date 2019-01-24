#include<stdio.h>
#include<conio.h>
int main()
{
int e=0,j=0,i,a[5],b[5];
clrscr();

printf("Problem statement\nwrite a program to add & substract two one dimensional array elements \nName Shivam Soni \nEnrollment No. = 0187cCS18105 \nLab-1 \nprogram-1\n");
printf("Enter the elements");
for(i=0;i<5;i++)
{printf("\na[%d] = ",i);
scanf("%d",&a[i]);
printf("b[%d] = ",i);
scanf("%d",&b[i]);
}
printf("\nsum of elements\n");
for(i=0;i<5;i++){
e=a[i]+b[i];
printf("%d ",e);
}
printf("\n subs of elements\n");
for(i=0;i<5;i++){
j=a[i]-b[i];
printf("%d",j);
}
getch();
return 0;
}