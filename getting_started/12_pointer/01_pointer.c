#include <stdio.h>

int main(void) {
    int number = 10;
    int *hoge;
    hoge = &number;
    printf("%d\n", number);
    printf("%d\n", *hoge);
    return 0;
}
