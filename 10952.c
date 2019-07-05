#include <stdio.h>

int main(void)
{
    long a, b;

    while(1)
    {
        scanf("%ld %ld",&a,&b);
        if(!a && !b)
            break;
        printf("%d\n",a+b);
    }
}
