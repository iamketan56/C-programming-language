#include<stdio.h>
int main()
{
char a[]="abcbna";
int h;
int l=strlen(a);
h=l-1;
int i=0;
while(h>i)
{
if(a[i++]!=a[h--])
{
printf("string is not palindrom");
return;
}
}
printf("string is palindrom");
}
