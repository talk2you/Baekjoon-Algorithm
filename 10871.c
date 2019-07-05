#include <stdio.h>

long N, X;

int main(void)
{
    long a;

    scanf("%ld %ld",&N,&X);

    while(N--)
    {
        scanf("%ld",&a);
        if(a < X)
            printf("%ld ",a);
    }
    printf("\n");
}
