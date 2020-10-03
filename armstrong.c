#include<stdio.h>
int main()
{
int num,temp,num1;
int res=0;
printf("enter the number to check armstrong or not");
scanf("%d",&num);
num1=num;
while(num1!=0)
{
temp=num1%10;
res=res+temp*temp*temp;
num1=num1/10;
}
if(res==num)
{
printf("number is armstrong");
}
else{
    printf("number is not armstrong");
}
}
