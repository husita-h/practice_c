#include <stdio.h>

int main(void)
{
    int *p;
    int i;
    // ①ポインタ変数モード
    // 読み書きしたいメモリのアドレスを代入する
    p = &i;
    // ②通常変数モード
    // 通常変数モードに切り替えて、そのメモリアドレスの値を操作する
    *p = 10; 
    printf("*p = %d\n", *p);
    printf("i = %d\n", i);
    return 0;
}
