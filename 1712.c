#include <stdio.h>

int main(void)
{
    int A,B,C;
    int i=1, profit = 0;

    scanf("%d %d %d",&A,&B,&C);

    if(C<=B)
        printf("-1\n");
    else
    {
        profit = A/(C-B)+1;
        printf("%d\n",profit);
    }
}
