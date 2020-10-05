#include<stdio.h>
#include<conio.h>
main()
{
int a[5]={4,2,3,1,5},i;
int shor=a[0];
for(i=1;i<5;i++)
{
if(a[i]<shor)
{
shor=a[i];
}
}
printf("shortest element is:%d",shor);
}
