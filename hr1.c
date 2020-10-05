#include<stdio.h>
#include<conio.h>
void main()
{ int a[10],b[10];
    int n;
    int i=0,j=0,k=0;
    printf("enter the number of elment(less then 10)\n");
    scanf("%d",&n);
    printf("enter the elment of ketan\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    printf("enter the elment of sumit\n");
 for(int i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }
   while(i<n)
{
if(a[i]>b[i])
{
     j=j+1;
}
else if(a[i]<b[i])
{
    k=k+1;
}
else
{

}
i++;
}
printf("ketan's point: %d",j);
printf("sumit's point: %d",k);
}
