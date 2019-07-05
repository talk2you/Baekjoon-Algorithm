#include <stdio.h>

long T;

int main(void)
{
    long i;
    long a,b;

    scanf("%ld",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%ld %ld",&a,&b);
        printf("Case #%ld: %d\n",i,a+b);
    }
}
