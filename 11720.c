#include <stdio.h>

char num[100];

int main(void)
{
    int a,i;
    int sum = 0;
    scanf("%d",&a);
    scanf("%s",num);

    for(i=0;i<a;i++)
        sum += num[i]-48;

    printf("%d\n",sum);
}
