// バブルソート
# include <stdio.h>

// # define <マクロ名> <定数or式>
# define N 5

int data[N] = {4, 2, 1, 5, 3};
int data[N] = {4, 2, 1, 5, 3};
void bubble_sort(void);

int main(){
    bubble_sort();
    // 結果の表示
    int i;
    for(i=0; i<N; i++){
        printf("%d", data[i]);
    }
}

void bubble_sort(){
    int tmp;
    int i, j;
    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
            // 隣り合う要素を比較
            if(data[j] > data[j + 1]){
                // 値を入れ替える
                tmp     = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
}

// ➜  sort git:(main) ✗ gcc -o 01_sort 01_sort.c && ./01_sort
// 12345%  
