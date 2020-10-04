#include<math.h>
#include<stdio.h>
int main()
{
int a,b,c,dis;
double root1,root2,real,img;
printf("ax^2+bx+c\n");
printf("enter the coefficient of a,b,c");
scanf("%d%d%d",&a,&b,&c);
dis=b*b-4*a*c;
printf("roots are :\n");
if(dis==0)
{
root1=root2=-b/2*a;
printf("%d%d",root1,root2);
}
if(dis>0)
{
root1=(-b+sqrt(dis))/2*a;
root2=(-b-sqrt(dis))/2*a;
printf("%.2f \n %.2f",root1,root2);
}
else
{
 real= -b / (2 * a);
img= sqrt(-dis) / (2 * a);
printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi",real,img,real,img);
}
}
