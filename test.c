#include <stdio.h>
#include <string.h>


int main(void)
{
    int i_load = 8, v = 24, c = 60;
    double vel = 6.4, r = 0.1, eta = 0.95;

    printf("---------사전 선정 정보---------\n");
    printf("평균전류 I_load [A] (부하측) : %d\n", i_load);
    printf("평균 속도 vsl [km/h] : %.1lf\n", vel);
    printf("예비율 R [20%% = 0.2] : %.1lf\n\n", r);

    printf("-----------배터리 정보-----------\n");
    printf("공칭전압 V [V] : %d\n", v);
    printf("용량 C [Ah] : %d\n", c);
    printf("시스템 효율 eta [90%% = 0.9] : %.2lf\n\n", eta);
    
    printf("[결과]\n");
    const double e_usable = (double)(v * c) * eta * (1 - r);
    printf("사용 가능 에너지 E_usable\t: %.2lf\n", e_usable);
    const double p = (double)(v * i_load) / eta;
    const double t = e_usable / p;
    printf("런타임 t\t\t\t: %.2lf h (365.5 min)\n", t);
    const double d = vel * t;
    printf("주행거리 d\t\t\t: %.2lf km\n", d);
    printf("계산 가정 : 전압강하/온도영향 무시, 평균전류 일정, 전류는 부하측 기준\n");

    return 0;
}