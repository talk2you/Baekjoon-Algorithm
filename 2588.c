#include <stdio.h>

int main(void)
{
    long a,b,i=3;
    long temp = 0;

    scanf("%d %d",&a,&b);

    temp = b;
    while(i--)
    {
         printf("%d\n",(b % 10)*a);
         b /= 10;
    }
    printf("%d\n",a*temp);

}
