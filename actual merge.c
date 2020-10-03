#include<stdio.h>
int main()
{
int a[8]={3,11,23,52,54,110,114,117,118};
int b[7]={4,34,66,100,111,112,113};

int i=0,j=0,k=0;
int loop=15;
int c[loop];

while(k<loop)
{
 if((a[i]<b[j]) || (j==sizeof(b)/sizeof(int)))
{
    c[k]=a[i];
    if(i==sizeof(a)/sizeof(int)){
            printf("i break");
    break;
    }
i++;

    //k++;
}
else
{
    c[k]=b[j];

    if(j==sizeof(b)/sizeof(int)){
         printf("j break");
    break;
    }
j++;
}
k++;
}
for(int l=0;l<loop;l++)
{
    printf("\n%d",c[l]);
}
}

