#include <stdio.h>

int main(void) {
    int score[5] = {10, 20, 30, 40, 50};
    int *p = score;
    int total = 0;
    double avg = 0;

    for (int i = 0; i < 5; i++)
        total += p[i];
        avg = total / 5.0;

    printf("총합 : %d/ 평균 : %.1f\n", total, avg);
    return 0;
}
