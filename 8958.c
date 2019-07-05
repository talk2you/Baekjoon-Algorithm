#include <stdio.h>

long T;
char arr[80];

int main(void)
{
    long i=0,cnt=0,plus=0;
    scanf("%ld",&T);

    while(T--)
    {
        scanf("%s",arr);
        while(arr[i] != '\0')
        {
            if(arr[i] == 'O')
            {
                cnt = cnt+plus+1;
                plus++;
            }
            else
                plus = 0;

            i++;
        }
        printf("%ld\n",cnt);
        cnt = 0;
        plus = 0;
        i = 0;
    }
}
