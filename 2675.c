#include <stdio.h>

int T, R;
char arr[21];

int main(void)
{
    int i = 0, j = 0;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&R);
        scanf("%s",arr);

        while(arr[i] != '\0')
        {
            for(j=0;j<R;j++)
                printf("%c",arr[i]);

            i++;
        }
        printf("\n");
        i = 0;
    }
}
