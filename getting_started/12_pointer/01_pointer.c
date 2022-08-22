#include <stdio.h>

// int main(void) {
//     int number = 10;
//     int *hoge;
//     hoge = &number;
//     printf("%d\n", number);
//     printf("%d\n", *hoge);
//     return 0;
// }

// メモリ上の番号を表示する
// int main(void)
// {
//     int i;
//     printf("%p\n", &i);
//     return 0;
// }
// ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// 0x16fdb30a8

// int main(void)
// {
//     int i1, i2, i3;
//     printf("i1(%p)\n", &i1);
//     printf("i2(%p)\n", &i2);
//     printf("i3(%p)\n", &i3);
//     return 0;
// }

// // ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// // i1(0x16f9f70a8)
// // i2(0x16f9f70a4)
// // i3(0x16f9f70a0)