#include <stdio.h>

char t[100];
char a[26];

int main(void)
{
    int i;

    for(i=0;i<26;i++)
        a[i] = -1;

    scanf("%s",t);

    i = 0;

    while(t[i] != '\0')
    {
        if(a[t[i] -97] == -1)
            a[t[i] - 97] = i;
        i++;
    }

    for(i=0;i<26;i++)
        printf("%d ",a[i]);
    printf("\n");
}
