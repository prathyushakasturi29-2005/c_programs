#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int i,len;
    printf("Enter the string:");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        rev[i]=str[len-i-1];
    }
    rev[len]='\0';
    if(strcmp(str,rev)==0)
    printf("string is a palindrome");
    else
    printf("string is not a palindrome");
    return 0;
}
