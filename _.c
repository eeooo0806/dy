#include <stdio.h>

int main(void) {
    
    int ary[5][6] = {{},{},{},{},{}};
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++) {
            ary[i][j] = count++;
        }
    }

    // 가로 합
    for (int i = 0; i < 4; i++)
    {
        int sum_1 = 0;
        for (int j = 0; j < 5; j++) {
            sum_1 += ary[i][j];
        }
        ary[i][5] = sum_1;
    }

    // 세로 합
    for (int j = 0; j < 5; j++)
    {
        int sum_2 = 0;
        for (int i = 0; i < 4; i++)
        {
            sum_2 += ary[i][j];
        }
        ary[4][j] = sum_2;        
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++)
        {
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        
    }
    

    return 0;
}