#include <stdio.h>

char arr[101];

int main(void)
{
    int i=0, sum=0;
    int cro = 0;
    char pre;

    scanf("%s",arr);

    while(arr[i] != '\0')
    {
        if(cro == 1)
        {
            if(pre == 'c')
            {
                if(arr[i] == '=' || arr[i] == '-')
                    i++;

            }
            else if(pre == 'd')
            {
                if(arr[i] == '-')
                    i++;
                else if(arr[i] == 'z')
                {
                    i++;
                    if(arr[i] == '=')
                        i++;
                    else
                        sum++;
                }
            }
            else if(pre == 'l')
            {
                if(arr[i] == 'j')
                    i++;

            }
            else if(pre == 'n')
            {
                if(arr[i] == 'j')
                    i++;

            }
            else if(pre == 's')
            {
                if(arr[i] == '=')
                {
                    i++;
                    cro = 0;
                }
            }
            else if(pre == 'z')
            {
                if(arr[i] == '=')
                {
                    i++;
                    cro = 0;
                }
            }
            cro =0;
        }

        if(arr[i] == '\0')
            break;

        switch(arr[i])
        {
            case 'c':
            case 'd':
            case 'l':
            case 'n':
            case 's':
            case 'z':
                pre = arr[i];
                cro = 1;
        }
        sum++;
        i++;
    }

    printf("%d\n",sum);
}
