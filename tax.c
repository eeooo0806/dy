#include <stdio.h>

#define EARNED_INCOME_TAX 4
#define LOCAL_INCOME_TAX 10
#define NATIONAL_PENSION 4.5
#define EMPLOYMENT_INSURANCE 0.8
#define HEALTH_INSURANCE 3.38

int main(void)
{   
    float salary, eit, lit, np, ei, hi, total;

    printf("This program calculates social insurance tax. \n");
    printf("Please enter your salary(month): ");
    scanf("%f", &salary);

    eit = salary * (EARNED_INCOME_TAX / 100.0);
    lit = eit * (LOCAL_INCOME_TAX / 100.0);
    np = salary * (NATIONAL_PENSION / 100.0);
    ei = salary * (EMPLOYMENT_INSURANCE / 100.0);
    hi = salary * (HEALTH_INSURANCE / 100.0);
    total = eit + lit+ np + ei + hi;

    printf("\nEarned income tax : \t%10d Won\n", (int)eit);
    printf("Local income tax : \t%10d Won\n", (int)lit);
    printf("National pension : \t%10d Won\n", (int)np);
    printf("Employment insurance : \t%10d Won\n", (int)ei);
    printf("Health insurance : \t%10d Won\n", (int)hi);
    printf("-----------------\n");
    printf("Total : \t\t%10d Won\n", (int)total);

    return 0;
}