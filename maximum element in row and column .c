#include <stdio.h>
#define size 3
int main()
{
    int a[size][size];
    int r, c, max = 0;
    printf("Enter elements in matrix of size %dx%d: \n", size, size);
    for(r=0; r<size; r++)
    {   for(c=0; c<size; c++)
        {   scanf("%d", &a[r][c]);
        }
    }
    for(r=0; r<size; r++)
    {   max = 0;
        for(c=0; c<size; c++)
        {   max= a[r][c];
        }
        printf(" max elements of Row %d = %d\n", r+1, max);
    }
    for(r=0; r<size; r++)
    {
        max = 0;
        for(c=0; c<size; c++)
        {   max = a[c][r];
        }
        printf("max  elements of Column %d = %d\n", r+1,max);
    }
    return 0;
}