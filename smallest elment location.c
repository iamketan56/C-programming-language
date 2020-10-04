#include <stdio.h>
 int main()
{
    int i,n,min,big;
        int a[8]={24,16,35,81,73,30,15,22};
        min = a[0];
       for (i=1;i<8;i++)
    {
        if (a[i] <min)
        {
           min= a[i];

        }
    }

    printf("Minimum element is %d \n", min);
     big=a[0];
     for (i=1;i<8;i++)
    {
        if (a[i]>big)
        {
          big= a[i];
        }
    }

    printf("Minimum element is %d\n", big);
    return 0;
}
