#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

int main(void) {
    Student s = {"Kim", 85};
    Student *ps = &s;

    printf("이름 : %s, 점수 : %d\n", ps -> name, ps -> score);
    return 0;
}