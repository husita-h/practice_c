#include <stdio.h>

int main(void) {
    char c = 'A';
    char greeting[] = "Hello";
    printf("%c\n", c);
    // 間違い
    // printf("%c\n", greeting);
    // https://www.tutorialspoint.com/cprogramming/c_strings.htm
    // %s
    // https://www.k-cube.co.jp/wakaba/server/format.html
    // この方法の問題点
    // あとから文字列を変更できない
    // 文字を一つひとつ宣言しなおすしかない
    printf("Greeting message: %s\n", greeting);
    return 0;
}
