#include<stdio.h>

void swap (int *x, int *y);
void shell_sort(int array[], int array_size);

int main (void) {
    int array[10] = { 2, 1, 8, 5, 4, 7, 9, 0, 6, 3 };
    int i;

    printf("Before sort: ");
    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
        }
    printf("\n");

    // シェルソート
    shell_sort(array, 10);
    printf("After sort: ");
    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
        }
    printf("\n");
    return 0;
}

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* シェルソート */
void shell_sort(int array[], int array_size) {
    int i, j, step;

    // 配列の要素を抜き出す間隔stepをstep=step*3+1の式で求める
    // step(n+1) = 3h(n) + 1
    for(step = 1; step <= array_size / 9; step = 3*step + 1) {
        for(i = step; i < array_size; i++){
            j = i;
            while((j > step - 1) && (array[j-step] > array[j])){
                swap(&array[j-step], &array[j]);
                j -= step;
            }
            // stepの間隔を狭める
            // step /= 3;
        }
    }
}

// void insert_sort(){
// }

// ➜  sort git:(main) ✗ gcc -o 03_sort 03_sort.c && ./03_sort
// Before sort: 2 1 8 5 4 7 9 0 6 3 
// After sort: 0 1 2 3 4 5 6 7 8 9
