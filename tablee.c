#include<stdio.h>
int main()
{int a,b,c;

    printf("enter the number");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
    printf("\n%dx%d=%d\n",a,i,a*i);
    }
}
