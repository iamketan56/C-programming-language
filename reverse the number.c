#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
   // int num;
int rev;
    while(num!=0)
    {
    rev=num%10;
    num=num/10;
    printf("%d",rev);
    }
    }

