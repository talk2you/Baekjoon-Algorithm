#include <stdio.h>

int N;

void hanoi(int n, int a, int b)
{
    int c;
    if(n<=1)
        printf("%d %d\n",a,b);
    else
    {
        c=6-a-b;

        hanoi(n-1,a,c);
        printf("%d %d\n",a,b);
        hanoi(n-1,c,b);
    }
}

unsigned long pow2(int n)
{
    int i;
    unsigned long result = 1;

    for(i=0;i<n;i++)
        result *= 2;

    return result;
}

int main(void)
{
    scanf("%d",&N);
    printf("%ld\n",pow2(N)-1);
    hanoi(N,1,3);
}
