#include <stdio.h>

typedef unsigned int uint16;

uint16 arr[10000] = {0,};

int main(void)
{
    int i,a;
    int temp;

    for(i=1;i<=10000;i++)
    {
        a = 0;
        temp = i;
        while(temp != 0)
        {
            a += temp % 10;
            temp /= 10;
        }
        a += i;
        arr[a-1] = 1;
    }

    for(i=0;i<10000;i++)
    {
        if(arr[i] == 0)
        printf("%d\n",i+1);
    }
}
