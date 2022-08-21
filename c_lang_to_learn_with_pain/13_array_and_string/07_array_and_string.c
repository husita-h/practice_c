#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str [] = "256";
    // char str [] = '256';
    int number = atoi(str);
    printf("%s\n", str);
    printf("%d\n", number);
    return 0;
}
