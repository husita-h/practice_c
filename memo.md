# 環境構築
- vscode 拡張機能
    - C/C++
    - https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools

## hello world
コンパイル 実行ファイルの作成
```sh
# gcc -o {コンパイル先のファイル名} {コンパイルするファイル名}
gcc -o hello hello.c
```

実行ファイルの実行
```sh
./hello
```

コンパイルと実行
```sh
gcc -o hello hello.c && ./hello
```

GCC: GNU Compiler Collection

GNUプロジェクトが作っているコンパイラ用のソフト

## memo

### #include <stdio.h>
`#include <stdio.h>`がないと
```c
#include <stdio.h>

int main() {
    printf("Hello,world!\n");
    return 0
}

// hello.c:4:5: error: implicitly declaring library function 'printf' with type 'int (const char *, ...)' [-Werror,-Wimplicit-function-declaration]
//     printf("Hello,world!\n");
//     ^
// hello.c:4:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
// 1 error generated.
```
- 内部処理
    - メモリにプログラムをロード
    - プログラムをメモリからレジスタへ移動
    - CPUでデータを処理
    - ディスプレイとの連携
    - キーボードとの入出力連携
    - Hello Worldと入力

- `#include <stdio.h>`
    - #include: ヘッダーファイルを取り込んでいる
    - stdio: Standord Input Output
    - .h: ヘッダーファイル
        - ヘッダーファイルには他にも<math.h>がある


### int main(void){}について
- int
    - どれくらいメモリを使うか
        - プログラムはメモリにロードしないと使えない
    - int: 4byte分のメモリのスペースを使う
- void

### エスケープシーケンス
>通常の文字列では表せない特殊な文字や機能を、規定された特別な文字の並びにより表したもの。
https://ja.wikipedia.org/wiki/%E3%82%A8%E3%82%B9%E3%82%B1%E3%83%BC%E3%83%97%E3%82%B7%E3%83%BC%E3%82%B1%E3%83%B3%E3%82%B9

`\n`

### 数値の出力
出力変換指定子
```c
// 出力変換指定子
printf("%d", 100);
```
フォーマット指定子一覧
https://www.k-cube.co.jp/wakaba/server/format.html

---
### 変数
メモリのスペースだけを先に確保して、あとから値を変更できる仕組みのこと。
使いそうなメモリのスペースだけ確保して、最初はまだ値を入れない。
変数の中に入れる数値や文字列はあとから変更できる。

```c
// valueという名前の変数を4byte分のスペースを使って宣言する
int value;
```

---
## データ型とメモリIC
メモリICがデータを記録する仕組み

プログラムはどこに保存される？
メモリにプログラムやデータを読み込むことで、コンピュタは処理を行う

データの保存
A0 ~ A9のアドレス信号ピンでメモリへのデータの保存場所を決めている

信号ピンの電気のON/OFFで保存場所を表す
2^10 = 1024通り の組み合わせだけ場所を指定できる
0000000000 ~ 1111111111

例)
```c
// valueという名前の変数を4byte分のスペースを使って宣言する
int value;
```
0000000001
0000000010
0000000011
0000000100

4つのアドレスを確保

```c
// valueという名前の変数を2byte分のスペースを使って宣言する
short value;
```
0000000001
0000000010

2つのアドレスを確保

`double` 8byte

---
## データ型



