#include <stdio.h>
#include <string.h>

typedef struct student {
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
} Student;

void sort(Student *list);

int main(void) {
    Student list[5] = {
        {315, "홍길동", 80, 75, 90},
        {316, "이순신", 88, 92, 100},
        {317, "서하윤", 95, 99, 98},
        {318, "유관순", 84, 70, 72},
        {319, "박신혜", 60, 65, 40}
    };
    int num;
    char name[20];
    int kor, eng, math;
    // for (int i = 0; i < 5; i++) {
    //     // printf("학번 : ");
    //     // scanf("%d", &num);
    //     // printf("이름 : ");
    //     // scanf("%s", name);
    //     // printf("국어, 영어, 수학 점수 : ");
    //     // scanf("%d%d%d", &kor, &eng, &math);

    //     list[i].num = num;
    //     strcpy(list[i].name, name);
    //     list[i].kor = kor;
    //     list[i].eng = eng;
    //     list[i].math = math;
    // }

    printf("# 정렬 전 데이터\n");
    for (int i = 0; i < 5; i++) {
        int total_i = list[i].kor + list[i].eng + list[i].math;
        double avg = total_i / 3;
        char grade;
        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else grade = 'F';
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%c\n", list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].math, total_i, avg, grade);
    }

    sort(list);

    printf("# 정렬 후 데이터\n");
    for (int i = 0; i < 5; i++) {
        int total_i = list[i].kor + list[i].eng + list[i].math;
        double avg = total_i / 3;
        char grade;
        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else grade = 'F';
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%c\n", list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].math, total_i, avg, grade);
    }

    return 0;
}

void sort(Student *list) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1 ; j < 5; j++) {
            int total_i = list[i].kor + list[i].eng + list[i].math;
            int total_j = list[j].kor + list[j].eng + list[j].math;
            if (total_i < total_j) {
                Student temp = list[i];
                list[i] = list[j];
                list[j] = temp; 
            }
        }
    }
}