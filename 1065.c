#include <stdio.h>

int N;
int arr[4] = {0,};
int cnt = 0;

void init_arr(void)
{
    int i;
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;
}

int main(void)
{
    int temp;
    int a, i, j, k;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        init_arr();
        j = 0;
        a = 0;
        temp = i;

        while(temp != 0)
        {
            a = temp % 10;
            temp /= 10;
            arr[j] = a;
            j++;
        }

        if(j<3)
            cnt++;
        else if(j == 3)
        {
            if(arr[2] - arr[1] == arr[1] - arr[0])
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
