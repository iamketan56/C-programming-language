#include<stdio.h>
int main()
{
int a[]={1,2,3,4};
int *ptr;
ptr=&a[1];
printf("address:%p",ptr);
for(int i=1;i<=3;i++)
{
 ptr++;
printf("\naddress :%p",ptr);
}
}
