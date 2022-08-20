// gcc -o 02_put 02_put.c && ./02_put

#include <stdio.h>
int main (void){
    printf("%d\n", 10+3);
    printf("%d\n", 10-3);
    printf("%d\n", 10*3);
    printf("%d\n", 10/3); //結果は整数
    printf("%d\n", 10+3*6-7);
    // printf("%d\n", 3.14); => 02_put.c:10:20: warning: format specifies type 'int' but the argument has type 'double' [-Wformat]
    // printf("%f\n", 10/3); => 02_put.c:11:20: warning: format specifies type 'double' but the argument has type 'int' [-Wformat]
    printf("%f\n", 3.14);
    return 0;
}