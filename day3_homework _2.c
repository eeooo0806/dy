#include <stdio.h>

typedef struct {
    char name[20];
    int pay;
} Employee;


int main(void) {
    Employee list[3] = {
        {"홍길동", 10000},
        {"홍이동", 9000},
        {"홍삼동", 8000}
    };
    Employee *p = list;

    int total_pay = 0;
    int avg_pay = 0;
    int top_pay = 0;

    for (int i = 0; i < 3; i++) {
        total_pay += (p + i)->pay;
        
        if (top_pay < (p + i)->pay) {
            top_pay = (p + i)->pay;
        }
    }
    
    avg_pay = total_pay / 3;
    printf("평균 급여 : %d\n", avg_pay);

    for (int j = 0; j < 3; j++) {
        if (top_pay == (p + j)->pay) {
            printf("최고 급여자 : %s\n", (p + j)->name);
        }
    }

    return 0;
}