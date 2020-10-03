#include<stdio.h>
main()
{
int l,f,m,n,s;
    printf("enter the size of array");
    scanf("%d",&n);
int a[n];
    printf("enter the element in array in sorted form");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    printf("enter the element to search");
    scanf("%d",&s);

    l=n-1;
    m=(n)/2;
	int isElementFound=0;
	if(a[m]<s)
	{
	     printf("less");
	int i=m;
	while(m<=n-1)
	{
	if(a[m]==s)
	{
            printf("%d at location:%d",s,m+1);
			isElementFound=1;
            break;
        }
		m=m+1;
	}
	}
	else
	{


	int i=0;
	while(i<=m)
	{
	     printf("%d %d",s,a[i]);
	if(a[i]==s)
	{
            printf("%d at location:%d",s,i+1);
			isElementFound=1;
            break;
        }
		i=i+1;
	}
	}
	if(isElementFound==0)
    {
        printf("Not found");

    }
}
