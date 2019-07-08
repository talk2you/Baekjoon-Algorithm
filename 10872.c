#include <stdio.h>

long N;

int main(void)
{
    int i;
    long fact = 1;

    scanf("%ld",&N);

    for(i=1;i<=N;i++)
        fact *= i;

    printf("%ld\n",fact);
}
