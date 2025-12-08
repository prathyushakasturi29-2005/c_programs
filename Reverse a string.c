#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int i,len;
    printf("Enter the string:");
    fgets(str,100,stdin);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        rev[i]=str[len-i-1];
    }
    printf("Reversed string:%s\n",rev);
    return 0;
}
