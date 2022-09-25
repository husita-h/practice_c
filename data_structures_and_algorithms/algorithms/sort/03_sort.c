// 挿入ソート
#include<stdio.h>

void swap (int *x, int *y);
void insertion_sort (int array[], int array_size);

int main (void) {
    int array[10] = { 2, 1, 8, 5, 4, 7, 9, 0, 6, 3 };
    int i;

    printf("Before sort: ");
    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    // 挿入ソート
    insertion_sort(array, 10);
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

// 挿入ソート
void insertion_sort (int array[], int array_size) {
    int i, j;
    for(i = 1; i < array_size; i++){
        // 先頭から順にソート
        j = i;
        // 整列済みの場合は処理しない
        // j > 0 と array[j-1] > array[j]どちらかが真
        // もしくは、どちらも真の場合
        // array[j-1] > array[j]
        // 左側 array[j-1] 右側 array[j]を比べて右側のほうが小さければ、ブロック内の処理を実行
        while((j > 0) && (array[j-1] > array[j])){
            // 整列されていない要素を交換
            swap(&array[j-1], &array[j]);
            // jをデクリメントする
            j--;
        }
    }
}
