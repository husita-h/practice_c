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

int main(void)
{
    int array[10];
    printf("array___(%p)\n", array);
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);
    printf("array[2](%p)\n", &array[3]);
    printf("array[2](%p)\n", &array[4]);
    printf("array[2](%p)\n", &array[5]);
    return 0;
}
// ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// array___(0x16fbe3080)
// array[0](0x16fbe3080)
// array[1](0x16fbe3084)
// array[2](0x16fbe3088)
// array[2](0x16fbe308c)
// array[2](0x16fbe3090)
// array[2](0x16fbe3094)