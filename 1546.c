#include <stdio.h>

long N;

int main(void)
{
    long a,sum=0,max=0;
    long i;

    scanf("%ld",&N);

    for(i=0;i<N;i++)
    {
        scanf("%ld",&a);
        if(max < a)
            max = a;
        sum+=a;
    }

     printf("%.4lf",(double)sum*100 / (max * N));

}
