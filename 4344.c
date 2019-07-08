#include <stdio.h>

long C,N;
long arr[1000];


int main(void)
{
    long i;
    long sum=0,cnt=0;
    double ave=0;
    scanf("%ld",&C);

    while(C--)
    {
        scanf("%ld",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        ave = (double)sum / N;

        for(i=0;i<N;i++)
        {
            if(arr[i] > ave)
                cnt++;
        }

        printf("%.3lf%%\n",(double)cnt/N*100);

        ave = 0;
        cnt = 0;
        sum = 0;

    }
}
