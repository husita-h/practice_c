# memo

## How to make a function
https://9cguide.appspot.com/11-01.html

### プロトタイプ宣言
あらかじめ先頭で関数の形を宣言しておくことで、
他のすべての関数からその関数を使えるようにすること

```c
#include <stdio.h>

int main(void) {
    return 0;
}

int sum(void) {
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}
```
>先ほど、新しくsum関数を作ってみましたが、
実は、これだけでは、sum関数を使うことができません。
**コンパイラは、新しくsum関数が作られていることを知らないからです。**

>場合によっては、コンパイラに新しく作られた関数を教える必要はありません。
コンパイラは、新しい関数を発見すれば、自動的に認識してくれるからです。
**ただし、新しい関数が使えるのは、その関数よりも後に発見された関数の中だけです。**

>先の例では、まずmain関数を作り、次にsum関数を作りました。
この場合、main関数を解析している段階では、sum関数は発見されておらず、
したがって、main関数の中では、sum関数を使うことは出来なくなってしまいます。

>**これを解決する方法の1つは、sum関数を先に書いてしまう方法です**。**
次のプログラムは、sum関数を先に書いた例です。

呼び出したい関数より前で定義する
```c
#include <stdio.h>

/* プロトタイプ宣言 */
int sum(void);

int main(void) {
    return 0;
}

int sum(void) {
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}
```

関数をメモリ上に置く
```c
int hoge() {
}
```

#### c言語のmain関数
- main関数で始まり、return 0で終わる
- return 0でプログラムは終了
- main関数のreturn 0はプログラムの終了を表す

#### 別の場所で関数を使うには
- プロトタイプ宣言
- 関数の呼び出し

main関数の中にすべての処理を書く必要がある
プロトタイプ宣言
関数の呼び出し

---

## 12_variable_lifetime

---

### 13_array_and_string
#### Arrays
メモリは1byteのデータを格納できるスペースが並んでいるイメージ
これらのスペースをまとめて確保するための仕組み

#### ?
なぜ代入していない要素に値入ってるのか
```c
#include <stdio.h>

int main(void) {
    int array [10]; // 確保したいメモリ
    array [2] = 15; // 代入
    printf("%d\n", array [2]);
    printf("%d\n", array [0]);
    printf("%d\n", array [0]);
    printf("%d\n", array [1]);
    printf("%d\n", array [2]);
    printf("%d\n", array [3]);
    return 0;
}
// ➜  13_array_and_string git:(main) ✗ gcc -o 01_array_and_string 01_array_and_string.c&& ./01_array_and_string
// 15
// 44318380
// 44318380
// 1
// 15
// 1
```

#### ?
```c
// sizeof演算子
int main(void) {
    int array [] = {10, 11, 12, 14, 15};
    int i;
    for (i = 0; i < sizeof(array) / sizeof(array[i]); i++) {
        // 代入したい要素2つ指定しているのか
        printf("%d: %d: %d: %d\n", i, array[i], sizeof(array), sizeof(array[i]));
    }
    return 0;
}
```
```log
➜  13_array_and_string git:(main) ✗ gcc -o 05_array_and_string 05_array_and_string.c&& ./05_array_and_string
05_array_and_string.c:9:49: warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
        printf("%d: %d: %d: %d\n", i, array[i], sizeof(array), sizeof(array[i]));
                        ~~                      ^~~~~~~~~~~~~
                        %lu
05_array_and_string.c:9:64: warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
        printf("%d: %d: %d: %d\n", i, array[i], sizeof(array), sizeof(array[i]));
                            ~~                                 ^~~~~~~~~~~~~~~~
                            %lu
2 warnings generated.
0: 10: 20: 4
1: 11: 20: 4
2: 12: 20: 4
3: 14: 20: 4
4: 15: 20: 4
```

---

## String
文字列を記憶する変数はない
何文字なのか事前に知ることができないから

ただし1文字だけなら、事前にその大きさがわかるので変数として扱うことができる

文字変数 char
char 変数名 = 'アルファベット1文字'
シングルクォーテーションであること
char の大きさ 1byte
アルファベット1文字の大きさ 1byte

printf("%c", hoge);

### atoi関数
文字列を数値に変換する
例えばtxtファイルから読み込んだデータは、数値も文字列として認識される

文字列をint型の数値に変換する

atoi
atod
atof
atol

int 数値を代入する変数 = atoi(文字列);

`#include <stdlib.h>`
のincludeが必要


#### ?
ダブルクオーテーションとシングルクォーテーションの違いは？

```c
int main(void) {
    char str [] = "256";
    // char str [] = '256';
    int number = atoi(str);
    printf("%s\n", str);
    printf("%d\n", number);
    return 0;
}
```