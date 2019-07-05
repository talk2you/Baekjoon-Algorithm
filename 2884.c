#include <stdio.h>

int main(void)
{
    long H,M;

    scanf("%ld %ld",&H,&M);

    if(M < 45)
    {
        if(H != 0)
            H--;
        else
            H = 23;
        M += 15;
    }
    else
        M -= 45;

    printf("%ld %ld\n",H,M);
}
