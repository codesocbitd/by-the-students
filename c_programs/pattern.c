#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("Hello world!\n");
    printf("your pattern is here\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
            if (j>=6-i && j<=4+i)
        {
            printf("^");
        }
        else
            printf(" ");
        printf("\n");
    }

    return 0;
}
