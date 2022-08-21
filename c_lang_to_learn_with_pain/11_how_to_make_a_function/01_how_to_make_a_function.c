#include <stdio.h>

// int main(void) {
//     return 0;
// }

// int sum(void) {
//     printf("%d\n", (1 + 100) * 100 / 2);
//     return 0;
// }
// // ➜  11_how_to_make_a_function git:(main) ✗ gcc -o 01_how_to_make_a_function 01_how_to_make_a_function.c
// //  && ./01_how_to_make_a_function

// 関数の呼び出し(引数なし)
int hello(void); // => プロトタイプ宣言

int main(void) {
    hello(); // 関数呼び出し
    return 0;
}

int hello(void) {
    printf("Hello World!\n");
    return 0;
}

// ➜  11_how_to_make_a_function git:(main) ✗ gcc -o 01_how_to_make_a_function 01_how_to_make_a_function.c && ./01_how_to_make_a_function
// Hello World!