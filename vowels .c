#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    int i,j=0;
    printf("Enter any string: ");
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'||str[i]=='o' || str[i]=='u'||str[i]=='A'||str[i]=='E'||
         str[i]=='I'||str[i]=='0'||str[i]=='U')
        {
            str[i]=' ';
        }
        else
        {
            str2[j++]=str[i];
        }
    }
    str2[j]='\0';
    printf("\n string without vowels %s", str2);
    return 0; 
    }