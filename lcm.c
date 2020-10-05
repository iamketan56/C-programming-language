#include<stdio.h>
int main()
{
int num1,num2,max;
printf("enter the two number to find the lcm");
scanf("%d%d",&num1,&num2);
max=(num1>num2)? num1:num2;
while(max%num1==0 && max%num2==0)
{
max++;
}
printf("%d",max);
}
