#include<stdio.h>
#include<string.h>
int main()
{
char a[]="07:05:45PM";
char s[10];
char p[10];
int l=strlen(a);
//printf("%d",l);
for(int i=0;i<l-2;i++)
{
    s[i]=a[i];
    printf("%c\n",s[i]);
}
printf("--------------\n");
for(int i=l-2;i<l;i++)
{
    p[i]=a[i];
    printf("%c\n",p[i]);
}

}
