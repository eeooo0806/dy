#include <stdio.h>

int main(void) {
    int x = 10, y = 5, z = 20;
    // scanf("%d%d%d", &x, &y, &z);

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    int max = *px;
    int min = *px;

    if (max < *py) {
        max = *py;
        if (max < *pz) {
            max = *pz;   
        }
    }

    if (min > *py) {
        min = *py;
        if (min > *pz) {
            min = *pz;
        }
    }
    
    printf("최댓값 : %d / 최솟값 : %d\n", max, min);
    
    return 0;
}