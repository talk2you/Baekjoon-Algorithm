#include <stdio.h>

int main(void)
{
    long a;

    scanf("%ld",&a);

    if(a % 400 == 0)
        printf("1\n");
    else if(a % 100 != 0)
    {
        if(a % 4 == 0)
            printf("1\n");
        else
            printf("0\n");
    }
    else
        printf("0\n");
}
