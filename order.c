#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the two number");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
    printf("number is descending order");
    }
    else if(num2>num1)
    {
    printf("number is ascending order");
    }
    else
    {
    printf("number is equal");

    }
}
