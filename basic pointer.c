#include<stdio.h>
main()
{
int a=100;
int *ptr;
ptr=&a;
printf("%p",ptr);//address of a
printf("\n%d",*ptr);//value of a
printf("\n%d",a);//value of a
printf("\n%d",&a);
printf("\n%d",ptr+1);//address of next location after a
printf("\n%d",*ptr+1);//value of a +1
printf("\n%p",&ptr+2);//address of pointer itself
}
