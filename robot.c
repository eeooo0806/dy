#include <stdio.h>

int main(void)
{
    double mass, torque, gear, radius, SF, margin;
    int wheels;

    const double g = 9.81; // 중력 가속도
    const double c = 0.018; // 구름 저항 계수 - 일반적인 고무바퀴 & 아스팔트 

    //이동로봇 사양 입력
    printf("총 하중(kg):\n");
    scanf("%lf",&mass);
    printf("구동 바퀴 수:\n");
    scanf("%d",&wheels);
    printf("안전계수:\n");
    scanf("%lf",&SF);
    printf("설계마진:\n");
    scanf("%lf",&margin);


    //모터 및 바퀴 사양 입력
    printf("모터 정격 토크(N.m)\n");
    scanf("%lf",&torque);
    printf("감속비: \n");
    scanf("%lf",&gear);
    printf("바퀴 반지름(m):\n");
    scanf("%lf",&radius);


    // 입력 받은 값으로 견입력 계산
    double W = mass * g;
    double F_min = c * W * SF * margin;
    double F_motor = (torque * gear / radius) * wheels;

    printf("필요한 최소 견입력: %.2lf [N]\n", F_min);
    printf("모터가 낼 수 있는 견입력: %.2lf [N]\n", F_motor);

    if (F_motor >= F_min){
        printf("판정 : 만족 (모터 견인력이 충분합니다.)\n");
    } else {
        printf("판정 : 불만족 (더 큰 모터나 감속비가 필요.)\n");
    }
    return 0;
}