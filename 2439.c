#include <stdio.h>

long T;

int main(void)
{
    long i,j;

    scanf("%ld",&T);

    for(j=1;j<=T;j++)
    {
        for(i=j;i<T;i++)
            printf(" ");
        for(i=0;i<j;i++)
            printf("*");
        printf("\n");
    }
}
