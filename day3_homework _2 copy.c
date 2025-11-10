#include <stdio.h>

typedef struct
{
    char name[20];
    int pay;
}Employee;

int main(void)
{
    Employee info[3] = {};
    Employee *pd = info;

    for (int i = 0; i < 3; i++)
    {
        printf("이름 입력 :");
        scanf("%s", info[i].name);

        printf("급여 입력 :");
        scanf("%d", &(info[i].pay));

        printf("\n");
    }

    int mean_pay = 0;
    int total = 0;

    int top_pay = 0;

    for (int i = 0; i < 3; i++)
    {
        if (top_pay < (pd+i)->pay)
        {
            top_pay = (pd+i)->pay;
        }
        
        total += pd->pay;
        mean_pay = total / 3;
    }

    for (int j = 0; j < 3; j++)
    {
        if (top_pay == (pd+j)->pay)
        {
            printf("최고 급여자 : %s\n",(pd+j)->name);

        }
    }

    printf("급여 평균 : %d\n", mean_pay);
    
    return 0;
}