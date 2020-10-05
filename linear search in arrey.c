#include<stdio.h>
main()
{
int a[5]={1,2,3,4,5},n,i;
printf("enter the element to found");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    if(a[i]==n)
    {
        printf("\nelement at %d location",i+1);
        break;
    }
}
if(i==5)
    {
        printf("element not found");
    }
}
