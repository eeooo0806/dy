#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    int *pa;
    int *pb;

    pa = &a;
    pb = &b;

    int sum = *pa + *pb;

    printf("합계 : %d\n", sum);
    return 0;
}