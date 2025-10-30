#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N, i;
    int battery[100];
    int warning = 0;

    for (i = 0; i < 100; i++)
    {
        battery[i] = rand() % 100;
        
        if (warning == 0 && battery[i] <= 30)
        {
            warning = 1;
        }
        else if (warning == 1 && battery[i] >= 35)
        {
            warning = 0;
        }
        printf("%d ", warning);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d ", battery[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    return 0;
}