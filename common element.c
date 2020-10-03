#include<stdio.h>
int main()
{
int a[5]={1,5,10,20,40};
int b[5]={6,7,20,80,100};
int c[8]={3,4,15,20,30,70,80,20};
int d[10],e[10];
int i,j,k=0;
int count=0,l,m,n=0;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==b[j])
{
count++;
scanf("%d",&d[k]);
k++;
}
}
}
for(l=0;l<10;l++)
{
for(k=0;k<count;k++)
{
if(c[l]==d[k])
{
n++;
scanf("%d",&e[m]);
m++;
}
}
}
for(m=0;m<n;m++)
{
printf("%d",e[m]);
}
}
