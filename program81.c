//program to print decimal ,octal and hexadecimal value of character
#include<stdio.h>
int main()
{
    char ch='\0';

    printf("Enter the character:\n");
    scanf("%c",&ch);

    printf("ASCII value of the character in DECIMAL is : %d\n",ch);
    printf("ASCII value of the character in OCTAL is : %o\n",ch);
    printf("ASCII value of the character is in HEXADECIMALA : %x\n",ch);

    return 0;
}