#include <stdio.h>

// int main(void)
// {
//     char str[256];
//     scanf("%s", &str[0]); //配列名は配列の最初の要素のアドレスを表す。配列の0番目の要素のアドレスを指定することで、配列のアドレスを指定したことと同じことをしている
//     printf("%s\n", str);
// }

// int main(void)
// {
//     char str[256] = "Apple";
//     scanf("%s", &str[4]); // 4番目の要素のアドレスを指定
//     printf("%s\n", str);
//     return 0;
// }
// // ➜  12_pointer git:(main) ✗ gcc -o 02_pointer 02_pointer.c && ./02_pointer
// //  Watch
// // ApplWatch

int main(void)
{
    char str[256] = "Apple"; // メモリを256byte確保する。初期時に文字列を代入する
    // 配列の0~4番目までは文字が既に代入されている
    // scanfに5番目の要素のアドレスを指定して入力することで、文字列が5番目から挿入される
    scanf("%s", &str[4]); // 5番目の要素のアドレスを指定
    printf("%s\n", str);
    return 0;
}
// ➜  12_pointer git:(main) ✗ gcc -o 02_pointer 02_pointer.c && ./02_pointer
// Watch
// ApplWatch