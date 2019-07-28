#include <stdio.h>

int N;
char arr[101];
char alphabet[26] = {0,};

int main(void)
{
    int i = 1;
    int check = 1;
    int fail = 0;
    char pre = 0;
    int sum = 0;

    scanf("%d",&N);
    while(N--)
    {
        scanf("%s",arr);

        pre = arr[0];

        alphabet[arr[0]-97] = check;

        while(arr[i] != '\0')
        {
            if(pre != arr[i])
            {
                if(alphabet[arr[i]-97] != 0)
                {
                    fail = 1;
                    break;
                }
                alphabet[arr[i]-97] = check;
            }
            pre = arr[i];
            i++;
        }

        if(fail == 0)
            sum++;

        for(i=0;i<26;i++)
            alphabet[i] = 0;
        i = 1;
        pre = 0;
        fail = 0;
    }
    printf("%d",sum);
}

#if 0

printf("arr : %c, ",arr[i]);
printf("pre : %c\n",pre);
printf("alphabet[arr[i]-97] : %d\n",alphabet[arr[i]-97] );

#endif
