#include <stdio.h>

// // 関数の呼び出し(引数あり)
// int calculater(int price); // => プロトタイプ宣言

// int main(void) {
//     calculater(1000); // 関数呼び出し
//     return 0;
// }

// int calculater(int price) {
//     printf("%f", price * 1.1);
//     return 0;
// }

// ➜  11_how_to_make_a_function git:(main) ✗ gcc -o 02_how_to_make_a_function 02_how_to_make_a_function.c && ./02_how_to_make_a_function
// 1100.000000%    


// 引数が複数
int calculater(int price, float tax); // => プロトタイプ宣言

int main(void) {
    calculater(1000, 1.1); // 関数呼び出し
    return 0;
}

int calculater(int price, float tax) {
    printf("%f", price * tax);
    return 0;
}