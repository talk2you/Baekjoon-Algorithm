#include <stdio.h>

long arr[42] = {0,};

int main(void)
{
    long a;
    int cnt = 0,i = 10;
    while(i--)
    {
        scanf("%ld",&a);
        arr[a%42]++;
    }

    for(i=0;i<42;i++)
    {
        if(arr[i] > 0)
            cnt++;
    }

    printf("%d\n",cnt);
}
