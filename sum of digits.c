#include <stdio.h>
int main()
{
int n,t,sum=0,r;
printf("Enter an integer\n");
scanf("%d",&n);
t=n;
while (t!=0)
{
r=t%10;
sum=sum+r;
t=t/10;
}
printf("Sum of digits of %d = %d\n",n,sum);
return 0;
}

