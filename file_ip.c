#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 512

void extract_log_data(char *line);

int main(void) {
    FILE *fp;
    char line[MAX_LINE_LENGTH];

    fp = fopen("fast.log", "r");
    char* source_ip[200];
    int i = 0;
    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        if (strstr(line, "IPv6") != NULL) {
            extract_log_data(line);
        }
        if (i >= 200) break;
    }

    for (int j = 0; j < i; j++) printf("%s\n", source_ip[j]);
    fclose(fp);
    return 0;
}

void Ip(char *ip) {
    char *colon = strrchr(ip, ':');
    if (colon != NULL) {
        *colon = '\0';
    }
}

void extract_log_data(char *line) {
    char temp_line[MAX_LINE_LENGTH];
    strncpy(temp_line, line, MAX_LINE_LENGTH-1);
    temp_line[MAX_LINE_LENGTH-1] = '\0';

    char *token;
    int token_count = 0;
    char* token_time;
    char* token_ip_1;
    char* token_ip_2;


    token = strtok(temp_line, " ");

    while (token != NULL) {
        token_count++;
        
        if (token_count == 1) {
            token_time = token;
        }
        if (token_count == 13) {
            token_ip_1 = token;
            Ip(token_ip_1);
        }
        if (token_count == 15) {
            token_ip_2 = token;
            Ip(token_ip_2);
            break;
        }

        token = strtok(NULL, " ");
    }

    if (token_time != NULL) {
        int hour;
        int min;
        int sec;
        sscanf(token_time, "%*d/%*d/%*d-%02d:%02d:%02d.%*d", &hour, &min, &sec);
        printf("[%02d:%02d:%02d] ", hour, min, sec);
    }
    printf("%s -> %s\n", token_ip_1, token_ip_2);
    return token_ip_1;
}

