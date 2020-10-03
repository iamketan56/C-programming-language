#include<stdio.h>
#include<string.h>
int main()
{
   char a[]="ketansharmadwivedi";
  int l=strlen(a);
  int count=0;
    for(int i=0;i<l;i++)
    {
   if(a[i]=='a'||a[i]=='u'||a[i]=='e'||a[i]=='i'||a=='0')
   {
       count++;
   }
    }
    printf("%d",count);
}
