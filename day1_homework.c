#include <stdio.h>

int main(void) {
    int a = 5, b = 20, c = 1, d = 2, e = 3;
    int sum_even = 0;
    int sum_odd = 0;

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;
    int *pe = &e;

    if (*pa % 2 == 0) {
        sum_even += *pa;
    } else sum_odd += *pa;

    if (*pb % 2 == 0) {
        sum_even += *pb;
    } else sum_odd += *pb;

    if (*pc % 2 == 0) {
        sum_even += *pc;
    } else sum_odd += *pc;
    
    if (*pd % 2 == 0) {
        sum_even += *pd;
    } else sum_odd += *pd;
    
    if (*pe % 2 == 0) {
        sum_even += *pe;
    } else sum_odd += *pe;

    printf("%d\n", sum_even);
    printf("%d\n", sum_odd);


    // int ary[5] = {10, 20, 1, 3, 5};
    // int sum_even = 0;
    // int sum_odd = 0;

    // for (int i = 0; i < 5; i++) {
    //     if (ary[i] % 2 == 0) {
    //         sum_even += ary[i];
    //     } else sum_odd += ary[i];
    // }

    // printf ("짝수합 : %d, 홀수합 : %d", sum_even, sum_odd);
    
    return 0;
}