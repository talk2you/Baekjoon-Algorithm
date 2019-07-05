#include <stdio.h>

int main(void)
{
    int i,j;
    long in[3];
    long temp;

    scanf("%ld %ld %ld",&in[0],&in[1],&in[2]);

    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(in[i] > in[j])
            {
                temp = in[j];
                in[j] = in[i];
                in[i] = temp;
            }
        }
    }
    printf("%d\n",in[1]);
}
