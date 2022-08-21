#include <stdio.h>

// sizeof演算子
int main(void) {
    int array [] = {10, 11, 12, 14, 15};
    int i;
    for (i = 0; i < sizeof(array) / sizeof(array[i]); i++) {
        // 代入したい要素2つ指定しているのか
        printf("%d: %d: %d: %d\n", i, array[i], sizeof(array), sizeof(array[i]));
    }
    return 0;
}
