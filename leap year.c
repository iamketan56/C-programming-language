#include<stdio.h>
int main()
{
int year;
printf("enter the year to check leap year or not");
scanf("%d",&year);
if(year%400==0)
{
printf("%d is leap year",year);
}
else
{
printf("%d not a leap year",year);
}
}
