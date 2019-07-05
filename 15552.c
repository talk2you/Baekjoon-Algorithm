#include <stdio.h>

long T;

int main(void)
{
    long sum = 0;
    long a, b;
    scanf("%ld",&T);

    while(T--)
    {
        scanf("%ld %ld",&a,&b);
        printf("%ld\n",a+b);
    }
}
