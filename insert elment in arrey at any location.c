#include <stdio.h>
insert()
{
      int loc,i,n,value;

   printf("Enter size of array\n");
   scanf("%d", &n);
int a[n];

   printf("Enter %d elements\n", n);

   for (i = 0; i<n;i++)
      scanf("%d", &a[i]);

   printf("Enter the location where you want to insert an element\n");
   scanf("%d", &loc);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (i= n - 1; i >= loc-1;i--)
      a[i+1] = a[i];

   a[loc-1] = value;

   printf("Now updated arrey is\n");

   for (i = 0;i <= n; i++)
      printf("%d\n", a[i]);
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
        for ( c = position - 1 ; c < n - 1 ; c++ )
        array[c] = array[c+1];

        printf("Resultant array is\n");

        for( c = 0 ; c < n - 1 ; c++ )
        printf("%d\n", array[c]);
    }
    return 0;
}
int main()
{
 printf("\ninsertion\n");
insert();
printf("\ndeletion\n");
deleteion();
}
