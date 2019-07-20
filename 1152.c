#include <stdio.h>

char arr[1000002] = {0,};

int main(void)
{
    unsigned long i = 0;
    unsigned long cnt = 0;

    fgets(arr,1000001,stdin);

    if(arr[0] == 32)
        i++;

    while(arr[i] != '\0')
    {
        if(arr[i] == '\n')
            break;

        if(arr[i-1] >= 65 && arr[i] == 32)
        {
            cnt++;
        }
        i++;
    }

    if(arr[i-1] >= 65)
        cnt++;

    printf("%ld\n",cnt);
}
