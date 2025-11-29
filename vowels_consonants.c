#include<stdio.h>
int main()
{
char ch;
int uppercase_vowel,lowercase_vowel;
printf("Enter a character:");
scanf("%c",&ch);
uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
if(uppercase_vowel||lowercase_vowel)
{
    printf("character is a vowel");
}
    else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("character is a consonant");
    }
    else
    {
        printf("character is not consonant");
    }
return 0;
}


