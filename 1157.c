#include <stdio.h>

char arr[1000001];
unsigned int alphabet[26] = {0,};

int main(void)
{
    int i = 0;
    int max = 0, i_save = 0;
    int cnt = 0;

    scanf("%s",arr);

    while(arr[i] != '\0')
    {
        if(arr[i] >= 65 && arr[i] <= 90)
        {
            alphabet[arr[i]-65]++;
        }
        else if(arr[i] >= 97 && arr[i] <= 122)
        {
            alphabet[arr[i]-97]++;
        }
        i++;
    }

    for(i=0;i<26;i++)
    {
        if(alphabet[i] > max)
        {
            max = alphabet[i];
            i_save = i;
            cnt = 0;
        }
        else if(alphabet[i] == max)
            cnt++;
    }

    if(cnt==0)
        printf("%c\n",i_save+65);
    else
        printf("?\n");
}
