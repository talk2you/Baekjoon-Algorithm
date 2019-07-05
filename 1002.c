#include <stdio.h>
#include <math.h>

int main(void) {
    int T,i;
    int x1,y1,r1,x2,y2,r2;
    double dist, temp;

    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

        x2 -= x1;
        y2 -= y1;
        x1 = 0;
        y1 = 0;

        dist = sqrt(pow(x2,2) + pow(y2,2));
        temp = dist - r1;
        if(temp < 0)
            temp *= -1;

        if(dist == 0.0 && r1 == r2)
            printf("-1\n");
        else if(r2 < dist + r1 && r2 > temp)
            printf("2\n");
        else if(r2 == dist + r1 || r2 == temp)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
