#include<stdio.h>
int main()
{
    int p,t,r;
printf("enter the principle amount");
scanf("%d",&p);
printf("enter the time");
scanf("%d",&t);
printf("enter the rate of interest");
scanf("%d",&r);
int si=(p*r*t)/100;
printf("%d",si);
}
