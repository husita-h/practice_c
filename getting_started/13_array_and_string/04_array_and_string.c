#include <stdio.h>

// for を使って出力
// int main(void) {
//     int array [] = {10, 11, 12, 14, 15};
//     for (i = 0; i < 5; i++) {
//         printf("%d\n", i, array [i]);
//     }
//     return 0;
// }

int main(void) {
    int array [] = {10, 11, 12, 14, 15};
    int i;
    for (i = 0; i < 5; i++) {
        // 代入したい要素2つ指定しているのか
        printf("%d: %d\n", i, array[i]);
    }
    return 0;
}
