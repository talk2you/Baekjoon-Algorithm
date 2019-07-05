#include <stdio.h>

int main(void)
{
    int i;
    long in;

    scanf("%ld",&in);

    for(i=1;i<10;i++)
        printf("%ld * %ld = %ld\n",in,i,in*i);
}
