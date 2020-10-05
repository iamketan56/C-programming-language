#include<stdio.h>
#include<conio.h>
insert()
{
    int a[50],n,i;
printf("enter the size of arrey");
scanf("%d",&n);
printf("enter %d element:",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

int key,loc;
printf("enter the element to insert now:");
scanf("%d",&key);
printf("enter the location:");
scanf("%d",&loc);
for(i=n-1;i>=loc;i--)
{
    a[i+1]=a[i];

}
 a[loc]=key;
for(i=0;i<=n;i++)
{
    printf("\n%d",a[i]);
}
}
deleteion()
{
     int array[100], position, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if ( position >= n+1 )
    printf("Deletion not possible.\n");

    else
    {
        for ( c = position ; c < n - 1 ; c++ )
        array[c] = array[c+1];

        printf("Resultant array is\n");

        for( c = 0 ; c < n - 1 ; c++ )
        printf("%d\n", array[c]);
    }
    return 0;
}
main()
{
    printf("\ninsertion\n");
insert();
printf("\ndeletion\n");
deleteion();
}


