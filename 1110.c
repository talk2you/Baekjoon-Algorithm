#include <stdio.h>

int main(void)
{
    long a,cnt = 0;
    long orig,calc;


    scanf("%ld",&a);
    orig = a;

    while(1)
    {
        cnt++;
        calc = orig / 10 + orig % 10;
        orig = calc%10 + (orig % 10)*10;

        if(orig == a)
            break;
    }
    printf("%ld\n",cnt);
}
