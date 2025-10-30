#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void classify_by_threshold(const int value[], int label[], int N, int threshold);
int count_black(const int label[], int N);
double average_index_of_black(const int label[], int N);

int main(void)
{
    int N, threshold;

    printf("센서 개수 : ");
    scanf("%d", &N);

    int value[N];
    int label[N];
    
    printf("value = ");
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        value[i] = rand() % 1024;
        printf("%d ", value[i]);
    }

    classify_by_threshold(value, label, N, 500);
    printf("\nlabel = ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", label[i]);
    }
    
    int black_count = count_black(label, N);
    printf("\nblack_count = %d", black_count);

    double index_avg = average_index_of_black(label, N);
    printf("\nindex_avg = %.1lf\n", index_avg);  

}

void classify_by_threshold(const int value[], int label[], int N, int threshold)
{
    for (int i = 0; i < N; i++)
    {
        if (value[i] < threshold)
        {
            label[i] = 1;
        }
        else if (value[i] >= threshold)
        {
            label[i] = 0;
        }
    }
}

int count_black(const int label[], int N)
{   
    int black_count = 0;

    for (int i = 0; i < N; i++)
    {
        black_count += label[i];
    }
    
    return black_count;
}

double average_index_of_black(const int label[], int N)
{
    int sum_index = 0;
    double index_avg = 0;

    for (int i = 0; i < N; i++)
    {
        sum_index += i * label[i];
    }
    
    int black_count = count_black(label, N);
   
    if (black_count == 0)
    {
        printf("라인 없음");
        return -1;
    }
    else
    {
        index_avg = (double)(sum_index / black_count);
    }

    return index_avg;
}