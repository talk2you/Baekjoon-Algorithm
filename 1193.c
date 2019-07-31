#include <stdio.h>

int N;

int main(void)
{
    int line = 1, i = 1, diff;
    scanf("%d",&N);

    while(N > line)
    {
        i++;
        line += i;
    }

    diff = line - N;

    if(i%2 == 1)
        printf("%d/%d\n",diff+1,i-diff);
    else
        printf("%d/%d\n",i-diff,diff+1);
}
