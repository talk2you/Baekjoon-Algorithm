#include <stdio.h>

int N;

int main(void)
{
    int five = 0, three = 0;
    scanf("%d",&N);

    five = N/5;
    three = N%5;

    if(three == 4)
    {
        five -= 1;
        three = 3;
    }
    else if(three == 3)
    {
        three = 1;
    }
    else if(three == 2)
    {
        five -= 2;
        three = 4;
    }
    else if(three == 1)
    {
        five -= 1;
        three = 2;
    }

    if(five < 0)
        five = -1;
    else
        five += three;
    printf("%d\n",five);
}
