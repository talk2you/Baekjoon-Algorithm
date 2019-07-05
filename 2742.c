#include <stdio.h>

long T;

int main(void)
{
    scanf("%ld",&T);

    do
        printf("%ld\n",T);
    while(T-- > 1);
}
