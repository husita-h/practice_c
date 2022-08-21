#include <stdio.h>

int main(void) {
    int array [10]; // 確保したいメモリ
    array [2] = 15; // 代入
    printf("%d\n", array [2]);
    printf("%d\n", array [0]);
    printf("%d\n", array [0]);
    printf("%d\n", array [1]);
    printf("%d\n", array [2]);
    printf("%d\n", array [3]);
    return 0;
}
// ➜  13_array_and_string git:(main) ✗ gcc -o 01_array_and_string 01_array_and_string.c&& ./01_array_and_string
// 15
// 44318380
// 44318380
// 1
// 15
// 1