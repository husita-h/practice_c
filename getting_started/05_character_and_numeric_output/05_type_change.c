#include <stdio.h>

// int main (void){
//     printf("%d\n", 3.14*3*3);
//     return 0;
// }

// 小数なのに、整数の型を使っているので怒られる
// 05_type_change.c:4:20: warning: format specifies type 'int' but the argument has type 'double' [-Wformat]
//     printf("%d\n", 3.14*3*3);
//             ~~     ^~~~~~~~
//             %f
// 1 warning generated.
// 1546188226

// キャスト変換
// int main (void){
//     printf("%d\n", (int) 3.14*3*3);
//     return 0;
// }

// ➜  practice_c git:(main) ✗ gcc -o 05_type_change 05_type_change.c && ./05_type_change
// 27
// 失敗
// >(int) 3.14*3*3
// 3.14だけが整数となり、3 * 3 * 3の結果が返されている

// キャスト変換
int main (void){
    printf("%d\n", (int) (3.14*3*3));
    return 0;
}
// ➜  practice_c git:(main) ✗ gcc -o 05_type_change 05_type_change.c && ./05_type_change
// 28

// ➜  practice_c git:(main) ✗ gcc -o 05_type_change 05_type_change.c && ./05_type_change
// 27

