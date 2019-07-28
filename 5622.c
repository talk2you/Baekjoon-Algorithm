#include <stdio.h>

char arr[20];

int change_num(char a)
{
    int temp;

    temp = a-65;

    if(temp < 3)
        return 3;
    else if(temp < 6)
        return 4;
    else if(temp < 9)
        return 5;
    else if(temp < 12)
        return 6;
    else if(temp < 15)
        return 7;
    else if(temp < 19)
        return 8;
    else if(temp < 22)
        return 9;
    else
        return 10;
}


int main(void)
{
    int i=0,sum=0;
    scanf("%s",arr);

    while(arr[i] != '\0')
    {
        sum += change_num(arr[i]);
        i++;
    }
    printf("%d\n",sum);
}
