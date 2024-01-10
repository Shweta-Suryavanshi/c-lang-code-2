//program to convert capital into small
#include<stdio.h>
char ConvertSmall(char cvalue)
{
    return cvalue+32;
}
int main()
{
    char ch='\0';
    char cRet='\0';

    printf("Enter number in capital\n");
    scanf("%c",&ch);

    cRet=ConvertSmall(ch);
    printf("Conversion in small is:%c\n",cRet);

    return 0;

}