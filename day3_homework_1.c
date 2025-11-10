#include <stdio.h>

typedef struct {
    char title[30];
    int price;
} Book;

int main(void) {
    Book s = {"제목", 15000};
    Book *ps = &s;

    int increase_price = (ps -> price) * 1.1;
    printf("기존가격 : %d원 -> 인상된 가격 : %d원\n", ps -> price, increase_price);
    
    return 0;
}