#include <stdio.h>

int main(void)
{
    long scale,i=7;
    long temp,judge;

    scanf("%ld",&scale);

    if(scale == 1 || scale == 8)
    {
        while(i--)
        {
            scanf("%ld",&temp);
            if(scale - temp == 1)
                judge = 2;
            else if(scale - temp == -1)
                judge = 1;
            else
            {
                judge = 0;
                break;
            }
            scale = temp;
        }
    }

    if(judge == 1)
        printf("ascending\n");
    else if(judge == 2)
        printf("descending\n");
    else
        printf("mixed\n");
}
