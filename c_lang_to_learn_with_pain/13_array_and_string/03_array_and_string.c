#include <stdio.h>

// 要素数を省略する
// 指定した数値の個数だけ、メモリが確保される
int main(void) {
    int array [] = {10, 11, 12};
    printf("%d\n", array [0]);
    printf("%d\n", array [1]);
    printf("%d\n", array [2]);
    return 0;
}
