#include <stdio.h>

// int main(void) {
//     int apple = 10;
//     if (apple) printf("The number of apples is not 0.\n");
//     return 0;
// }


// int main(void) {
//     int apple = 10;
//     if (apple == 10) printf("The number of apples is not 0.\n");
//     return 0;
// }


// int main(void) {
//     int apple = 10;
//     if (apple != 10) printf("The number of apples is not 0.\n");
//     return 0;
// }


// if-else
int main(void) {
    int age;
    scanf("%d", &age);
    if (age <= 10) {
        printf("You are a little child.\n");
    } else if (age <= 20) {
        printf("You are a young man.\n");
    } else {
        printf("You are an adult.\n");
    }
    return 0;
}


// // switch-case
// int main(void) {
//     int number;
//     scanf("%d", &number);
//     switch (number){
//     case 1:
//         printf("One\n");
//         break;
//     case 2:
//         printf("Two\n");
//         break;
//     case 3:
//         printf("Three\n");
//         break;
//     case 4:
//         printf("Four\n");
//         break;
//     default:
//         printf("Other\n");
//         break;
//     }
//     return 0;
// }
