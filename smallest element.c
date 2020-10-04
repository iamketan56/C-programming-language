#include<stdio.h>
int main()
{
int i,j,n,temp;
printf("enter the size of arrey");
scanf("%d",&n);
int a[n];
printf("enter the element in arrey");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<a[0])
    {
        printf("smallest element is %d",a[i]);
    }
}
}
