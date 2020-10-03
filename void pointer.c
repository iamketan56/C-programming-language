#include<stdio.h>
main()
{

    int a=100;
    float b=2.3;
   char c[10]="ketan";
    void *ptr;
    ptr=&a;
    printf("\n%p",ptr);//referencing
    printf("\n%d",*(int *)ptr);//de referencing
    ptr=&b;
    printf("\n%p",ptr);//referencing
    printf("\n%f",*(float *)ptr);
    ptr=&c;
    printf("\n%p",ptr);
    printf("\n%s",*(char *)ptr);

}
