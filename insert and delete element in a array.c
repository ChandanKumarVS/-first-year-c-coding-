#include <stdio.h>
int main()
{
    int n;
    printf("enter the arrary size",n);
    scanf("%d",&n);
    printf("enter the arrary elements");
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    int ele;
    printf("enter the element ");
    scanf("%d",&ele);
    if(pos>n)
        printf("Invalid Input");
    else
    {
        for(i=n-1; i<pos-1; i--)
            arr[i+1]=arr[i];
        arr[pos-1]=ele;
        printf("Array after insertion is:\n");
        for(i=0; i<=n; i++)
            printf("%d\n",arr[i]);
      printf("\nEnter the position : ");
    scanf("%d", &pos);
 }
    if (pos>=n+1)

        printf("\nDeletion not possible.\n");
    else
    {
        for(i=pos-1; i<n-1; i++)
            arr[i]=arr[i+1];
        printf("\nArray after deletion : ");
        for(i=0; i<n-1; i++)
            printf("%d\n", arr[i]);
    }
    return 0;
}

