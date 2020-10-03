#include<stdio.h>
int main()
{
int item;
    int a[10]={11,12,13,14,15,16,17,18,19,20};
    printf("enter the value to want to search");
    scanf("%d",&item);
    int i=0;
   while(i!=10)
   {
        if(a[i]==item)
        {
            printf("element found at %d position",i+1);
        }
         i++;
    }
}
