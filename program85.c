//program to print given string
#include<stdio.h>
int main()
{
    char Arr[20];

    printf("Enter the string\n");
    gets(Arr);//scanf("%s",Arr);

    printf("Entered string is:%s\n",Arr);

    return 0;
}