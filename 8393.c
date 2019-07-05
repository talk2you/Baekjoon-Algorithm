#include <stdio.h>

long T;

int main(void)
{
    long sum = 0;
    scanf("%ld",&T);

    do
        sum += T;
    while(T--);

    printf("%ld\n",sum);
}
