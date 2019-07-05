#include <stdio.h>
#include <math.h>

typedef struct location
{
    int x,y;
} LOC;

typedef struct planet
{
    int x,y,r;
} PNT;

int main(void)
{
    LOC start,end;
    PNT cross;
    int T, i, j;
    int n, cnt;
    double dist1, dist2;

    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%d %d %d %d",&start.x,&start.y,&end.x,&end.y);
        scanf("%d",&n);
        cnt = 0;

        for(j=0;j<n;j++)
        {
            scanf("%d %d %d",&cross.x,&cross.y,&cross.r);
            dist1 = sqrt(pow(start.x - cross.x,2) + pow(start.y - cross.y,2));
            dist2 = sqrt(pow(end.x - cross.x,2) + pow(end.y - cross.y,2));

            if((dist1 > cross.r && dist2 < cross.r) || (dist1 < cross.r && dist2 > cross.r))
                cnt++;
        }

        printf("%d\n",cnt);
    }
}
