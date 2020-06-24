#include <stdio.h>
#include <string.h>
int main()
{
  	char Str1[100], Str2[100];
  	int l1,l2,i;
 printf("\n Enter the First String :  ");
  gets(Str1);
  	printf("\n Enter the Second String :  ");
 gets(Str2);
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] != Str2[i])
   	{
   		printf("\n strings are different ");
	}
	else if(Str1[i] = Str2[i])
   	{
   	printf("\n str1 is Equal to str2");
	}
  	return 0;
}