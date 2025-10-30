#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double adc_to_voltage(const int adc[], double Vref);
double voltage_to_distance(double k);

int main(void)
{
    int N;
    double Vref = 5.0, k = 27.0;

    printf("N : ");
    scanf("%d", &N);
    printf("\nVref = %.1lf", Vref);
    printf("\nk = %.1lf", k);

    int adc[N];
    double V[N];

    printf("\nADC -> ");
    for (int i = 0; i < 1024; i++)
    {
        adc[i] = rand() % 1024;
        printf("%d ", adc[i]);
    }
      
    printf("\n전압(V) -> ");
    for (int i = 0; i < N; i++)
    {  
        printf("%.2lf ", V[i]);
    }

    double distance = voltage_to_distance(k);
    printf("\n거리(cm) -> ");
    for (int i = 0; i < N; i++)
    {
        printf("%.2lf ", distance);
    }

    return 0;
}

void adc_to_voltage(const int adc[], double Vref)
{
    double voltage = 0;
    voltage = (double)adc[i] / 1023 * Vref;
    return voltage;
}

double voltage_to_distance(double k)
{
    double voltage = adc_to_voltage(adc, V, Vref, N);
    double distance = 0;
    distance = k / voltage;
    return distance;
}


