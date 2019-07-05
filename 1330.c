#include <stdio.h>

int main(void)
{
    long a,b;

    scanf("%ld %ld",&a,&b);

    if(a>b)
        printf(">\n");
    else if(a<b)
        printf("<\n");
    else
        printf("==\n");
}
