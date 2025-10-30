#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N, i, delta, accel = 0, brake = 0;
    int speed[100];
    speed[0] = 0;

    for (i = 1; i < 100; i++)
    {
        speed[i] = rand() % 19 - 9;
    }

    delta = speed[i] - speed[i-1];
    if (delta >= 10)
    {
        accel++;
    }
    else if (delta <= -10)
    {
        brake++;
    }
    printf("[주행로그 분석 결과]\n");
    printf("급가속 : %d\n", accel);
    printf("급제동 : %d\n", brake); 

}