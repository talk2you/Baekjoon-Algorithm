#include <stdio.h>

int inv_num(int num)
{
    int i = 100, temp = 0;

    while(i)
    {
        temp += num%10*i;
        num /= 10;
        i /=10;
    }
    return temp;
}

int main(void)
{
    int a,b;

    scanf("%d %d",&a,&b);
    a = inv_num(a);
    b = inv_num(b);

    if(a > b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
}
