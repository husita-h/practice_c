// gcc -o 01_hello 01_hello.c && ./01_hello
#include <stdio.h>

int main(void) {
    printf("Hello,world!\n");
    printf("こんにちは");
    printf("ありがとう");
    printf("こんにちは\n");
    printf("ありがとう\n");
    // 出力変換指定子
    printf("%d\n", 100);
    printf("%d", 100);
    printf("円\n");
    printf("%d円\n", 100);
    printf("%d+", 100);
    printf("%d=", 200);
    printf("%d\n", 300);
    printf("%d+%d=%d\n", 100, 200, 300);
    printf("合計は%d円です\n", 300);
    return 0;
}
