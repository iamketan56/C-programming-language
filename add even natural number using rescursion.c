#include<stdio.h>
int even(int);
main()
{
int n,res;
printf("enter the value");
scanf("%d",&n);
res=even(n);
printf("sum is %d",res);
}
int even(int n)
{
if(n==0)
return 0;
else
return n+even(n-2);
}
