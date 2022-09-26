#include <stdio.h>

// int main(void)
// {
//     char *s = "HI!";
//     printf("%c\n", s[0]);
//     printf("%c\n", s[1]);
//     printf("%c\n", s[2]);
// }
// // ➜  memory git:(main) ✗ gcc -o 01_test 01_test.c && ./01_test   
// // H
// // I
// // !

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}
// ➜  memory git:(main) ✗ gcc -o 01_test 01_test.c && ./01_test
// H
// I
// !