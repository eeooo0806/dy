#include <stdio.h>
#include <math.h>


int main (void)
{
    double m, Tm, G, eta, r, c, SF;
    int Nm;
    const double g = 9.81;

    printf("총 질량 : %lf\n");
    scanf("%lf",&m);
    printf("모터 정격토크 : %lf\n");
    scanf("%lf",&Tm);
    printf("구동 모터 수 : %d\n");
    scanf("%d",&Nm);
    printf("감속비 : %lf\n");
    scanf("%lf",&G);
    printf("구동 효율 (0-1) : %lf\n");
    scanf("%lf",&eta);
    printf("바퀴 반지름 : %lf\n");
    scanf("%lf",&r);
    printf("구름계수 c (예:0.015-0.03) : %lf\n");
    scanf("%lf",&c);
    printf("안전계수 : %lf\n"); 
    scanf("%lf",&SF);

    //계산
    double Ttot = Nm * Tm * G * eta;  // 총 구동 토크 [Nm]
    double Favail = Ttot / r;  // 가용 견인력 [N]
    double mg = m * g;
    double Fneed = sin(mg) + c * mg;

}

double clip(double x, double min_val, double max_val)
{
    if (x < min_val) {
        return min_val;
    } 
    if (x > max_val) {
        return max_val;
    }
    return x;
}