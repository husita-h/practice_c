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




