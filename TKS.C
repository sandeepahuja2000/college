#include<stdio.h>
#include<conio.h>

int main()
{

int a[3][3],b[3][3],i,j;
clrscr();
printf("enter the elements row wise\n");

for(i=0;i<=2;i++){
for(j=0;j<=2;j++){
scanf("%d",&a[i][j]);}}

for(i=0;i<=2;i++){
printf("\n");
for(j=0;j<=2;j++)
printf("%d ",a[i][j]);}
printf("\n");
for(i=0;i<=2;i++){
for(j=0;j<=2;j++)
b[i][j]=a[j][i];}

for(i=0;i<=2;i++){
printf("\n");
for(j=0;j<=2;j++)
printf("%d ",b[i][j]);}

for(i=0;i<=2;i++){
for(j=0;j<=2;j++)
if(a[i][j]==b[i][j];)

break;}
if(k>0)
{printf("sym");}
else
printf("non sym");


getch();
return 0;

}
