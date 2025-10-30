#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main(void) {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    int error_count = 0;      

    fp = fopen("log.txt", "r");

    if (fp == NULL) {
        perror("Error opening log.txt");
        return 1; 
    }

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        if (strstr(line, "ERROR") != NULL) {
            error_count++;
        }
    }

    fclose(fp);

    printf("ERROR 발생 횟수: %d\n", error_count);

    return 0;
}