#include<stdio.h>
int add(int);
main()
{
int n,res;
printf("enter the value");
scanf("%d",&n);
res=add(n);
printf("sum is %d",res);
}
int add(int n)
{
if(n==1)
return 1;
else
return n+add(n-1);
}
