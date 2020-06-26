#include<stdio.h>
int add();
void main()
{

    add();
    getchar();
}
int add()
{
    int sum,i=10,j=20;
    sum=i+j;
    printf("sum is %d",sum);
    return sum;
}
