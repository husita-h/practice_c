#include <stdio.h>

// int main(void) {
//     int i;
//     // (初期化; 条件式; 更新) 
//     for (i = 1; i <= 10; i++) {
//         printf("message.\n");
//     }
//     return 0;
// }


// int main(void) {
//     int i;
//     // (初期化; 条件式; 更新) 
//     for (i = 1; i <= 10; i++) {
//         printf("%d 回目\n");
//     }
//     return 0;
// }
// // ???
// // ➜  06_basic_flow_of_control git:(main) ✗ gcc -o  03_loops 03_loops.c && ./03_loops
// // 03_loops.c:17:18: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
// //         printf("%d 回目\n");
// //                 ~^
// // 1 warning generated.
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 49921860 回目
// // 実行する度に出力結果が変わる
// // ➜  06_basic_flow_of_control git:(main) ✗ gcc -o  03_loops 03_loops.c && ./03_loops
// // 03_loops.c:17:18: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
// //         printf("%d 回目\n");
// //                 ~^
// // 1 warning generated.
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目
// // 81067844 回目

// int main(void) {
//     int i;
//     // (初期化; 条件式; 更新) 
//     for (i = 1; i <= 10; i++) {
//         // 間違い
//         // printf("%d 回目\n");
//         // %d に i を代入する必要がある
//         printf("%d 回目\n", i);
//     }
//     return 0;
// }
// // ➜  06_basic_flow_of_control git:(main) ✗ gcc -o  03_loops 03_loops.c && ./03_loops
// // 1 回目
// // 2 回目
// // 3 回目
// // 4 回目
// // 5 回目
// // 6 回目
// // 7 回目
// // 8 回目
// // 9 回目
// // 10 回目

// // 無限ループ
// int main(void)
// {
//     for (;;) {
//         printf("メッセージ\n");
//     }
    
//     return 0;
// }
// // メッセージ
// // メッセージ
// // メッセージ
// // メッセージ
// // (以下省略)
// // ^C
// >実は、この無限ループは非常に広く使われるテクニックです。
// >みなさんが普段から使っている、一般的なアプリでは、
// >キー入力やマウス入力やタッチ入力があったら、それに対応した画面を表示するという処理を、
// >ユーザーがアプリを終了させるまでは永遠に繰り返しています。
// https://9cguide.appspot.com/09-02.html


// // while
int main(void) {
    int money = 1;
    // double money = 1;
    int month = 1;
    while (money < 1000000) {
        printf("%d 月目 : %d 円\n", month, money);
        // printf("%d 月目 : %f 円\n", month, money);
        printf("%02d 月目 : %7d 円\n", month, money);
        // printf("%02d 月目 : %7.0f 円\n", month, money);
        money *= 2;
        month++;
    }
    printf("%02d 月目 に %7.0f 円となり、100万円を超える。\n", month, money);
    return 0;
}
// // ➜  06_basic_flow_of_control git:(main) ✗ gcc -o  03_loops 03_loops.c && ./03_loops
// 1 月目 : 1.000000 円
// 01 月目 :       1 円
// 2 月目 : 2.000000 円
// 02 月目 :       2 円
// 18 月目 : 131072.000000 円
// 18 月目 :  131072 円
// 19 月目 : 262144.000000 円
// 19 月目 :  262144 円
// 20 月目 : 524288.000000 円
// 20 月目 :  524288 円
// 21 月目 に 1048576 円となり、100万円を超える。
// >なぜdouble型で計算しているのかと言いますと、
// >16ビットコンパイラの LSI-C86 ではint型では百万を記憶出来ないためです。
// >そのほかのコンパイラでは問題ないので、各自でint型に直してみてください。
// >int month = 1;

