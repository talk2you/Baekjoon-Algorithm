#include <stdio.h>

int main(void)
{
    long a;

    scanf("%ld",&a);

    if(a>89 && a<101)
        printf("A\n");
    else if(a>79 && a<91)
        printf("B\n");
    else if(a>69 && a<81)
        printf("C\n");
    else if(a>59 && a<71)
        printf("D\n");
    else
        printf("F\n");
}
