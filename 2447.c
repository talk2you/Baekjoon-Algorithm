#include <stdio.h>

long N;

void star(void)
{
    int temp_i, temp_j;
    int i,j,k;
    int space = 0;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            for(k=1;k<N;k*=3)
            {
                temp_i = i/k;
                temp_j = j/k;

                if(temp_i%3 == 1 && temp_j%3 == 1)
                    space = 1;
            }
            if(space)
                    printf(" ");
            else
                    printf("*");
            space = 0;
        }
        printf("\n");
    }
}

int main(void)
{
    scanf("%ld",&N);

    star();
}
