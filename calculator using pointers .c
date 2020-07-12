/* Program to design simple commercial calculator */
#include <stdio.h>
void main()
{
    int *num1,*num2,n1,n2;
    float result=0; 
    char ch; 
    printf("Enter first number: ");
    scanf("%d",&n1); 
    printf("Enter second number: ");
    scanf("%d",&n2); 
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch); 
    num1=&n1; 
    num2=&n2; 
    switch(ch) 
    {
    case '+':
        result=*num1+*num2;
        break;
    case '-':
        result=*num1-*num2;
        break;
    case '*':
        result=*num1**num2;
        break;
    case '/':
        result=(float)*num1/(float)*num2;
        break;
    case '%':
        result=*num1%*num2;
        break;
    default:
        printf("Invalid operation.\n");
    }
    printf("Result: %d %c %d = %f\n",n1,ch,n2,result); 
}
