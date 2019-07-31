#include <stdio.h>

int N;

int main(void)
{
    int cnt = 1, six = 6;

    scanf("%d",&N);

    if(N <= 1)
    {
        printf("%d\n",cnt);
        return 0;
    }

    N--;

    while(1)
    {
        N -= six;
        cnt++;
        if(N <= 0)
            break;
        six += 6;
    }

    printf("%d\n",cnt);

}
