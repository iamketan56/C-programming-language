#include<stdio.h>
main()
{
int a[]={1,2,3,4};
int *ptr[4];
for(int i=0;i<3;i++)
{
ptr[i]=&a[i];
}
for(int i=0;i<3;i++)
{
printf("\n address:%d",ptr[i]);
printf("\n value:%d",*ptr[i]);
}
}
