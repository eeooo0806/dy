#include <stdio.h>

int sum (int n);

int main(void)
{   
    int i = 10;

    int total = sum(i);
    printf("%d", total);

    return 0;
}

int sum (int n)
{
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}