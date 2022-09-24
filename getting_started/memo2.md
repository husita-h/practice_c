# 2022-08-20
## 環境構築
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
メモリのスペースを確保するために必要
どれくらいの大きさかがわからない

char 1byte 1文字
short 2byte 整数
int 4byte 整数
float 4byte 小数
double 8byte 小数

どの型が何byteかはコンパイラによって異なる

### 型変換
キャスト変換
整数から小数へ
小数から整数へ変換する仕組み

### scancf関数
キーボードからの入力を受け付ける

`scanf("入力変換指定子", &変数名);`

---
# 2022-08-21

## Basic Flow Of Control
- Sequential
- Branches
- Loops

### 関係演算子
https://9cguide.appspot.com/07-02.html

### フォーマット指定子一覧
https://www.k-cube.co.jp/wakaba/server/format.html

下の2文の違いは
```c
printf("%d 月目 : %f 円\n", month, money);
printf("%02d 月目 : %7.0f 円\n", month, money);
```

>%02dは０詰２桁、%7.0fは小数点も含めた全体７桁小数部０桁で出力するという意味
>表示桁数の指定
表示桁数は<全体の幅>.<小数点以下の幅>で指定する。
>どちらか片方だけの指定でも良いし、まったく指定しなくても良い。
>指定がなければデフォルトが使用される。
><小数点以下の幅>は、文字列の場合には最大文字数の意味になる。

---
## ポインタ

### メモリ上の番号を表示する
>プログラムで宣言した変数も、このメモリに番号付きで記憶されています。
ただ、番号で区別するのではわかりにくいので、名前をつけているのです。
実行ファイルにコンパイルすると、変数名は番号に変換されます。
要するに、すべての変数はメモリに作られており、
そこでは、番号をつけて区別しているということをまずは頭に入れてください。
https://9cguide.appspot.com/15-02.html

```c
#include <stdio.h>

int main(void)
{
    int i;
    printf("%p\n", &i);
    return 0;
}
// ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// 0x16fdb30a8
```

>指定された変数をどの番号のメモリに割り当てるのかは、
コンパイラ(正確にはリンカ)が自動的に決めてしまい、
さらにその値もOSの仮想メモリ機能によって変化するからです。

https://www.cc.kyoto-su.ac.jp/~yamada/programming/pointer.html

リンカ
>**リンカとは、機械語のプログラムの断片を適切に結合し、実行可能なプログラムとして生成するためのプログラムです。リンケージエディタ、連係編集プログラムとも言います。**
高水準言語によって書かれた複数のソースコードを、それぞれ機械語に翻訳(コンパイル)した時、それらはまだ実行できるプログラムではありません。これらを適切に配置するのがリンカであり、このようにプログラムの断片を適切に構成する作業をリンクと呼びます。
**C言語を例にとると、ソースコードがコンパイルされるとオブジェクトファイルというプログラムの断片が生成します。これらのオブジェクトファイルやライブラリを適切に組み合わせることで、ライブラリや実行可能プログラム(exeファイル)を作製します。**
コンパイルの作業とリンクの作業を合わせて、ビルドといいます。
https://gimo.jp/glossary/details/linker.html

>変数のアドレス
プログラム中の変数は，それに必要なサイズ分だけのバイト数がメインメモリのどこかの領域に（必要な時に）確保されて，それが変数の実体となる。 一つの変数のアドレスとは，その変数に割り当てられた領域にあるバイトのうち，先頭のもの（アドレスが最初のもの）のアドレスのことである。

変数のアドレスは、その変数に割り当てられた領域にあるバイトのうち先頭のアドレス


アドレス演算子`&`
**変数名にアドレス演算子&を付けることで、その変数に割り当てられたアドレスを、「ポインタ」という形で得ることができる***
printf の`%p`はポインタ値(アドレス値)を表示するためのフォーマット識別子

```c
int main(void)
{
    int i1, i2, i3;
    printf("i1(%p)\n", &i1);
    printf("i2(%p)\n", &i2);
    printf("i3(%p)\n", &i3);
    return 0;
}

// ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// i1(0x16f9f70a8)
// i2(0x16f9f70a4)
// i3(0x16f9f70a0)
```

アドレスは16進数で出力される

### 配列の番号
>配列の場合には、先頭に&をつける必要はありません。
ただし、配列の個々の要素は変数と同じ扱いなので、当然&をつけます。

```c
#include <stdio.h>

int main(void)
{
    int array[10];
    printf("array___(%p)\n", array);
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);
    printf("array[2](%p)\n", &array[3]);
    printf("array[2](%p)\n", &array[4]);
    printf("array[2](%p)\n", &array[5]);
    return 0;
}
// ➜  12_pointer git:(main) ✗ gcc -o 01_pointer 01_pointer.c && ./01_pointer
// array___(0x16fbe3080)
// array[0](0x16fbe3080)
// array[1](0x16fbe3084)
// array[2](0x16fbe3088)
// array[2](0x16fbe308c)
// array[2](0x16fbe3090)
// array[2](0x16fbe3094)
```

配列のアドレス = 配列の0番目の要素のアドレス
配列のアドレスに?を足すことで、配列の他の要素のアドレスを求めることができる


### すべては値渡し
>しかし、この引数で渡すことができるのは、あくまでも数値です。
**関数を呼び出す時に変数を指定した場合には、**
**変数に記憶されている値が、呼び出された関数の実引数にコピーされます。**
つまり、**引数で関数に渡されるデータは、すべて数値であるということです。**
この様に、引数で数値を渡す方式を、値渡しと呼ぶことがあります。
https://9cguide.appspot.com/15-03.html

C言語では、実引数が関数に引き渡されるとき、その実引数自身ではなく実引数のコピーが引き渡される
= 値渡し
**関数の側から見ると、引き渡されたのは関数の外にある実引数そのものではなく、その実引数の値のコピーだけ**
**したがって、関数からその実引数の値を変更することは不可能**

#### 配列について
配列名は配列の最初の要素のアドレスを表す

#### 変数の中身を直接変更したい場合はどうするのか?
- &演算子を使ってアドレスを求めて、そのアドレスの数値を渡す
- 関数に呼び出し側の変数のアドレスがわかるので、そのアドレスを書き換える
- そうすることで呼び出し側の変数を書き換えられる

???
イマイチわかっていない

### ポインタ
- ポインタ型
- ポインタ値
- ポインタ変数

### &付き変数
https://9cguide.appspot.com/15-03.html
&は変数のアドレスを求める演算子
どんな変数でも、&演算子を使うと、変数のアドレスを求めることができる

#### 変数のアドレスを知る目的


### メモリICの仕組み

### ポインタとは
https://www.tutorialspoint.com/cprogramming/c_pointers.htm
https://9cguide.appspot.com/15-03.html
メモリのアドレスを指定するための仕組み

*付き音変数

### ポインタの構文
```c
int main(void) {
    int number = 10;
    int *hoge;
    hoge = &number;
    printf("%d\n", number);
    printf("%d\n", *hoge);
    return 0;
}
```

### ポインタを使うメリット


### ポインタを使ったプログラム

