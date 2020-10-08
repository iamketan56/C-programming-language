#include<stdio.h>
int main()
{
    int number;
    printf("enter the number up to which u wanna prime numbers");
    scanf("%d",&number);
       for(int i=2;i<=number;i++)
       {
          int c=0;
           for(int j=1;j<=i;j++)
           {

               if(i%j==0)
               {
                   c++;
               }
           }
           if(c==2)
           {
               printf("%d",i);
           }
       }
}
