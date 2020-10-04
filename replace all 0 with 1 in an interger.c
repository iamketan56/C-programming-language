#include<stdio.h>
#include<maths.h>
int main()
{
    int n=100;
    int sum=0;
    int x=0;
    while(n!=0)
    {
    int r=n%10;
    n=n/10;
    if(r==0)
    {
        r=5;
    }
    sum+=(r*pow(10,x));
    x++;
    }
    printf("%d",sum);
}
