#include <stdio.h>

int main(void)
{
    long a,i;
    long max = 0, mem;
    for(i=0;i<9;i++)
    {
        scanf("%ld",&a);
        if(max < a)
        {
            mem = i+1;
            max = a;
        }
    }
    printf("%d\n%d\n",max,mem);
}
