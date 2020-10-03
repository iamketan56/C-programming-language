#include<stdio.h>
int main()
{
int a[2][2];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    a[i][j]=0;
scanf("%d",&a[i][j]);

}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
printf("\t%d\n",a[i][j]);
}

}
}

