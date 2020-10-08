#include<stdio.h>
#include<conio.h>
int swap(int *,int *);
int main()
{
    int a,b;
     printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    swap( &a,&b);
    printf("a:%d",a);
    printf("\nb:%d",b);
}
  int swap(int *x,int *y)
    {
        int temp;
       temp=*x;
        *x=*y;
        *y=temp;
    }
