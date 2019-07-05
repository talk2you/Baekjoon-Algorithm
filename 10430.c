#include <stdio.h>

int main(void)
{
    long a,b,c;

    scanf("%ld %ld %ld",&a,&b,&c);
    printf("%ld\n",(long)(a+b)%c);
    printf("%ld\n",(long)((a%c)+(b%c))%c);
    printf("%ld\n",(long)(a*b)%c);
    printf("%ld\n",(long)((a%c)*(b%c))%c);
}
