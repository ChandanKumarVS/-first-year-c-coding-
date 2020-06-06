#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
int n,i;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements : ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int min = INT_MAX;
int second_min = INT_MAX ;
if (n < 2)
{
printf("\nInvalid Input");
}
for(i = 0; i < n; i++)
{
if(arr[i] < min)
{
second_min = min;
min = arr[i];
}
}
for(i = 0; i < n; i++)
{
if(arr[i] < second_min && arr[i] != min)
{
second_min = arr[i];
}
}
printf("\nThe second smallest element is %d \n", second_min);
return 0;
}

