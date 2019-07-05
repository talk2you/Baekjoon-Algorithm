#include <stdio.h>

char num[10] = {0,};

int main(void)
{
    long a,b,c,i;
    long prod;
    scanf("%ld %ld %ld",&a,&b,&c);
    prod = a*b*c;

    while(prod!= 0)
    {
        num[prod%10]++;
        prod = prod/10;
    }

    for(i=0;i<10;i++)
        printf("%ld\n",num[i]);
}
