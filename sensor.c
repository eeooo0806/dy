#include <stdio.h>

int main(void)
{   
    double dist[360];
    int i, min_index = 0;
    double min_value, cur_min_value;
    
    printf("360도 라이다 거리값 입력\n");
    for (i = 0; i < 10; i++)
    {
        printf("%3d 거리(cm) : ", i);
        scanf("%lf", &dist[i]);
    }
    
    cur_min_value = min_value;
    min_value = dist[0];
    for (i = 0; i < 10; i++)
        {
            if(dist[i] > cur_min_value && dist[i] < min_value)
            {
                min_value = dist[i];
                min_index = i;
            }
        }

    cur_min_value = min_value;
    min_value = dist[0];
    for (i = 0; i < 10; i++)
        {
            if(dist[i] > cur_min_value && dist[i] < min_value)
            {
                min_value = dist[i];
                min_index = i;
            }
            printf("가장 가까운 거리 : %.1lf cm\n", min_value);
            printf("장애물 방향 : %d\n", min_index);
        }

    return 0;
}