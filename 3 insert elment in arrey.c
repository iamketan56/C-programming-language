#include<stdio.h>
int main()
{
    int a[30];
    int n,loc,data;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("list is\n");
for(int i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
printf("enter the new element to insert\n");
scanf("%d",&data);
printf("enter the location to insert\n");
scanf("%d",&loc);
for(int i=n-1;i>=loc;i--)
{
        a[i+1]=a[i];
        a[loc]=data;
}
for(int i=0;i<=n;i++)
{
    printf("%d\n",a[i]);
}
}
