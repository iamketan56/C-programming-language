#include<stdio.h>
#include<string.h>
int main()
{
char a[]="ketansharmadwivedi";
  int l=strlen(a);
 strrev(a);
 for(int i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
}
