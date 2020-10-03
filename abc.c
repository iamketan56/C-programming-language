#include<stdio.h>
int main()
{ int f,s,m,n;
    printf("enter the size of 1st arrey");
    scanf("%d",&f);
    int a[f];
    printf("enter the size of 2nd arrey");
    scanf("%d",&s);
    int b[s];
    printf("enter the %d element for 1st arrey",f);
    for(m=0;m<f;m++)
    {
        scanf("%d",&a[m]);
    }
     printf("enter the %d element for 2nd arrey",s);
    for(n=1;n<s;n++)
    {
        scanf("%d",&b[n]);
    }

int i=0,j=0,k=0;
int loop=f+s;
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
printf("after merge both arrey");
for(int l=0;l<loop;l++)
{
    printf("\n%d",c[l]);
}
}

