#include <stdio.h>

void distinct_elements(int a[], int n);
int main()
{ 
int size_array, i, arr[20];
printf("enter the size");
scanf("%d", &size_array);
printf ("enter the array elements ");
{
for(i=0; i<size_array; i++)
scanf("%d", &arr[i]);
}
distinct_elements(arr, size_array);
return 0;
}
void distinct_elements(int a[], int n)
{
int i, j;
for (i=0; i<n; i++)
{
for (j=0; j<i; j++)
{
if (a[i] == a[j])
break;
}
if (i == j)
i=sizeof(a[i]);
printf("the no of distinct elements %d \n ", a[i]);
}
}

    