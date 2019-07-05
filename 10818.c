#include <stdio.h>

long N;

int main(void)
{
    long min = 1000000, max = -1000000;
    long val;
    scanf("%ld",&N);
    while(N--)
    {
        scanf("%ld",&val);

        if(min > val)
            min = val;
        if(max < val)
            max = val;

        if((min == -1000000) && max == 1000000)
            break;
    }

    printf("%ld %ld\n",min,max);
}
