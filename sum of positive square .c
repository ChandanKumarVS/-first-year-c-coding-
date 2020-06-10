#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n,c,j,sum=0;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0; i<n; ++i)
        scanf("%d",&a[i]);
    for(i=0; i<n; ++i)
    {
        c=0;
        for(j=0; j<a[i]; ++j)
        {
            if ((j*j)==a[i])
            {
                c++;
                break;
            }
        }
        if (c>0)
            sum+=a[i];
    }
    printf("sum of square elements %d",sum);
    return 0;
}