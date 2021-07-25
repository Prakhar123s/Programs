#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch,character;
    printf("Enter the character:");
    scanf("%c",&character);
    ch=tolower(character);
    if(ch='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("The given charcter is vowel");
    }
    else
    {
    printf("The given number is not vowel");
    }
}