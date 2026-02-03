#include<stdio.h>
void main()
{
    int row;
    int coloum;
    int i;
    int j;
    printf("enter the number of rows \n ");
    scanf("%d",&row);
    printf("enter the number of coloum\n");
    scanf("%d",&coloum);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=coloum;j++)
        {
        if(i==1||i==row||j==1||j==coloum||i==j)
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
