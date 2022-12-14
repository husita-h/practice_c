#include <stdio.h>

// 変数名の前に*をつけることでポインタ変数を宣言できる
// intへのポインタ型の変数を宣言している
// ポインタを使うと、メモリの値を読み書きすることができる
int *p;

// ポインタ変数にはメモリのアドレスを代入する
// ポインタ変数とはアドレスを代入する変数
// ポインタ変数には、OSによって管理されたアドレスを代入する必要がある

// 方法:
// もう一つ別の変数を宣言して、そのアドレスを代入する
// 宣言された変数は、OSによって管理されたメモリ領域に作られているため、問題なく使用できる。
// 例:
// ポインタ変数pに変数のアドレスを代入する
int main(void)
{
    // ポインタ変数pに、int型の変数iのアドレスを代入する
    int *p;
    int i;
    // &演算子で変数iのアドレスを求めてポインタ変数pに代入している
    p = &i;
    return 0;
}