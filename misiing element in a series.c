#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,10,11};
    int i=0;
    while(i!=10)
    {
        if(a[i]!=a[i+1]-1)
            break;
      i++;
    }
    printf("%d",i+2);
}
