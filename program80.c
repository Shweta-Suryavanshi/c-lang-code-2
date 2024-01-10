#include<stdio.h>
void Display()
{
    int i=9;
    int j=9;
    int iCnt=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i == j || i+j == 10)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
   Display();

   return 0; 
}