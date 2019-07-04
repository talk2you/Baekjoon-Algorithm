#include <stdio.h>
#include <stdlib.h>

long *time;
int *arr_idx;
int **rule;
int *cnt_node;
int goal;
int test = 0;
int T,N,K, result;

int cnt_for = 0;
int cnt_route = 0;

void swap_2d(int** s1, int** s2);

void test_bench(void);
int init_val(void);
long calc(int val);

int main(void)
{
    int i, j;

    scanf("%d",&T);

    for(i=0;i<T;i++)
    {

        //test_bench();
        scanf("%d %d",&N,&K);
        init_val();

        for(j=0;j<N;j++)
            scanf("%ld",&time[j]);

        for(j=0;j<K;j++)
            scanf("%d %d",&rule[j][0],&rule[j][1]);

        scanf("%d",&goal);

        for(j=0;j<N;j++)
        {
            arr_idx[j] = 0;
            cnt_node[j] = 0;
        }
        for(j=0;j<K;j++)
        {
            arr_idx[rule[j][1]-1] = j+1;
            cnt_node[rule[j][1]-1] += 1;
        }

/*
        printf("arr_idx\n");
        for(j=0;j<N;j++)
            printf("%d ", arr_idx[j]);
        printf("\ncnt_node\n");
        for(j=0;j<N;j++)
            printf("%d ", cnt_node[j]);
        printf("\nrule\n");
        for(j=0;j<K;j++)
            printf("%d %d\t", rule[j][0],rule[j][1]);

        printf("\n");
*/
        calc(goal);

        printf("%d\n",time[goal-1]);
/*        printf("for count : %d\nroute count : %d\n",cnt_for,cnt_route);

        printf("rule\n");
        for(j=0;j<K;j++)
            printf("%d %d\n",rule[j][0],rule[j][1]);

        for(j=0;j<N;j++)
            printf("%d ", time[j]);
        printf("\n");
*/


        for(j=0;j<K;j++)
            free(rule[j]);
        free(rule);
        free(time);
        free(arr_idx);
        free(cnt_node);
        test = 0;
    }
}

int init_val(void)
{
    int i;

    time = (long*)malloc(N*sizeof(long));
    rule = (int**)malloc(K*sizeof(int*));
    arr_idx = (int*)malloc(N*sizeof(int));
    cnt_node = (int*)malloc(N*sizeof(int));

    for(i=0;i<K;i++)
    {
        arr_idx[i] = 0;
        rule[i] = (int*)malloc(2*sizeof(int));
    }
}

long calc(int val)
{
    int i,j;
    int dol = test;
    int temp_test = test;
    long temp_time = 0;
    long re_time = 0;

    if(arr_idx[val-1] != 0)
    {
        dol = arr_idx[val-1]-1;
        arr_idx[val-1] = 0;
    }

    for(i=dol;i<=K;i++)
    {
        cnt_for++;

        if(cnt_node[val-1] == 0)
        {
            time[val-1] += temp_time;
            //printf("return %d\n",time[val-1]);
            return time[val-1];
        }

        if(rule[i][1] == val)
        {
            //printf("found it! %d\n", val);
            cnt_node[val-1] -= 1;
            cnt_route++;

            //printf("swap prev : %d %d // %d %d",rule[i][0],rule[i][1],rule[test][0],rule[test][1]);
            swap_2d(&rule[i],&rule[test]);

            test++;
            re_time = calc(rule[test-1][0]);
            //printf("re_time : %d, temp_time : %d\n", re_time, temp_time);
            if(re_time > temp_time)
            {
                temp_time = re_time;
            }

            i = test-1;
        }
        else
            arr_idx[rule[i][1]-1] = i+1;
    }

}

void swap_2d(int** s1, int** s2)
{
    int i,temp;

    for(i=0;i<2;i++)
    {
        temp = s1[0][i];
        s1[0][i] = s2[0][i];
        s2[0][i] = temp;
    }
}

#define _test3
#ifdef _test1
void test_bench(void)
{
    int i;
    N = 5;
    K = 10;
    init_val();
    rule[0][0] = 4;    rule[0][1] = 5;
    rule[1][0] = 3;    rule[1][1] = 5;
    rule[2][0] = 3;    rule[2][1] = 4;
    rule[3][0] = 2;    rule[3][1] = 5;
    rule[4][0] = 2;    rule[4][1] = 4;
    rule[5][0] = 2;    rule[5][1] = 3;
    rule[6][0] = 1;    rule[6][1] = 5;
    rule[7][0] = 1;    rule[7][1] = 4;
    rule[8][0] = 1;    rule[8][1] = 3;
    rule[9][0] = 1;    rule[9][1] = 2;

    time[0] = 100000;
    time[1] = 99999;
    time[2] = 99997;
    time[3] = 99994;
    time[4] = 99990;

    goal = 4;
}
#endif
#ifdef _test2
void test_bench(void)
{
    int i;
    N = 5;
    K = 10;
    init_val();
    rule[0][0] = 1;    rule[0][1] = 2;
    rule[1][0] = 2;    rule[1][1] = 4;
    rule[2][0] = 1;    rule[2][1] = 4;
    rule[3][0] = 1;    rule[3][1] = 3;
    rule[4][0] = 1;    rule[4][1] = 5;
    rule[5][0] = 2;    rule[5][1] = 3;
    rule[6][0] = 2;    rule[6][1] = 5;
    rule[7][0] = 3;    rule[7][1] = 5;
    rule[8][0] = 4;    rule[8][1] = 5;
    rule[9][0] = 3;    rule[9][1] = 4;

    for(i=0;i<N;i++)
        time[i] = i+1;

    goal = 4;
}
#endif
#ifdef _test3
void test_bench(void)
{
    int i;
    N = 20;
    K = 21;
    init_val();
    rule[0][0] = 1;      rule[0][1] = 2;
    rule[1][0] = 3;      rule[1][1] = 5;
    rule[2][0] = 3;      rule[2][1] = 4;
    rule[3][0] = 14;      rule[3][1] = 8;
    rule[4][0] = 8;      rule[4][1] = 7;
    rule[5][0] = 16;      rule[5][1] = 8;
    rule[6][0] = 1;      rule[6][1] = 9;
    rule[7][0] = 9;      rule[7][1] = 12;
    rule[8][0] = 9;      rule[8][1] = 11;
    rule[9][0] = 12;     rule[9][1] = 13;
    rule[10][0] = 13;    rule[10][1] = 18;
    rule[11][0] = 13;    rule[11][1] = 19;
    rule[12][0] = 19;    rule[12][1] = 20;
    rule[13][0] = 18;    rule[13][1] = 20;
    rule[14][0] = 20;    rule[14][1] = 17;
    rule[15][0] = 11;    rule[15][1] = 14;
    rule[16][0] = 11;    rule[16][1] = 16;
    rule[17][0] = 14;    rule[17][1] = 15;
    rule[18][0] = 16;    rule[18][1] = 15;
    rule[19][0] = 15;    rule[19][1] = 17;
    rule[20][0] = 2;    rule[20][1] = 3;

    for(i=0;i<N;i++)
        time[i] = i+1;

    goal = 17;
}
#endif
