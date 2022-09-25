// 選択ソート
#include<stdio.h>

// int型の配列
void swap(int *x, int *y);
void selection_sort(int array[], int array_size);

int main (void){
    int i;
    int array[10] = { 2, 1, 8, 5, 4, 7, 9, 0, 6, 3 };
    printf("Before sort: ");
    for (i = 0; i < 10; i++){
        printf("%d", array[i]);
    }
    printf("\n");
    // 選択ソート
    selection_sort(array, 10);
    printf("After sort: ");
    for(i = 0; i < 10; i++){
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}

// 値を交換する関数
// intへのポインタ型
void swap(int *x, int *y) {
    int temp;
    // xのメモリアドレスを代入
    temp = *x;
    // yのメモリアドレスをxのメモリアドレスを代入
    *x = *y;
    // tempに退避させておいたもともとのxのメモリアドレスをyのメモリアドレスに代入
    *y = temp;
}

// 選択ソート
void selection_sort(int array[], int array_size) {
    int i, j, min_index;

    // 引数で受け取った配列の要素一つひとつに対して以下の処理を行う
    for(i = 0; i < array_size; i++) {
        // for(i = 0; i < array_size - 1; i++) {
        // 先頭要素のindexをmin_indexとする
        min_index = i;
        for(j=i+1; j < array_size; j++) {
            // 値の比較
            // ①array[min_index]の要素の次の要素(j=i+1)と、arrayのmin_indexを比較する
            // 次の要素が、array[min_index]より小さければ、最小値を更新する
            if(array[j] < array[min_index]){
                // 最小値の更新
                min_index = j;
            }
        }
        // 最小値と先頭要素を交換
        swap(&array[min_index], &array[i]);
    }
}

