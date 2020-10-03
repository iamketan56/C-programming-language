#include<stdio.h>
int main()
{
int item;
    int a[10]={11,12,13,14,15,16,17,18,19,20};
    printf("enter the value to want to search\n");
    scanf("%d",&item);
        int f=0;
        int l=9;
        int mid=(l+f)/2;
     while(l>=f)
   {
       if(a[mid]==item)
       {
           printf("element is found at %d:",mid+1);
           break;
       }

       else if(a[mid]>item)
        {
       l=mid-1;
        }
   else
    {
            f=mid+1;
    }
       mid=(l+f)/2;
}
  if(a[mid]!=item)
{
    printf("not found");
}
}
