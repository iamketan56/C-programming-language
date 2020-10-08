#include<stdio.h>
int main()
{
int a=100;
int *p;
int **q;
p=&a;
q=&p;
printf("address of a:%p",p);//
printf("\nvalue of a:%d",*p);
printf("\naddress of pointer p:%p",q);//
printf("\nvalue of pointer p:%p",*q);//point to one level means value of pointer p
printf("\naddress of pointer q:%p",&q);
printf("\nvalue of pointer p:%p",**q);//point to two level means value of a

}
