#include <stdio.h>

// 戻り値 return value
int calculater(int price, float tax); // => プロトタイプ宣言

int main(void) {
    float total = calculater(1000, 1.1); // 関数呼び出し
    if (total > 10000) {
        printf("合計金額: %f 高めです", total);
    } else {
        printf("合計金額: %f 安めです", total);
    }
    return 0;
}

int calculater(int price, float tax) {
    return price * tax;
}