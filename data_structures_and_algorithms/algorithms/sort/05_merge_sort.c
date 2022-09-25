// マージソート
#include <stdio.h>

int N; // 要素数
int A[100]; // もとの配列
int C[100]; // マージに利用する配列
void Sort(int l, int range);
void Merge(int l, int median, int range);

int main()
{
	// 入力
    // ①要素数
    // ②要素
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
        scanf("%d", &A[i]);
    }

	Sort(1, N + 1);
	for(int i = 1; i <= N; i++){
        printf("%d\n", A[i]);
    }
	return 0;
}

// ソート
// ①k個の要素からなる列を、それぞれk/2個の要素からなる列A、列Bに分割する
// ②列Aに対して、マージソートを行い、ソートしたあとの列をA'とする
// ③列Bに対して、マージソートを行い、ソートしたあとの列をB'とする
// ④列A'、列B'に対して、Merge操作を行うことで、k個の列からなる列がソートされる
// A[l], A[l+1], ..., A[range−1] を小さい順に整列する関数
void Sort(int l, int range)
{
	// r − l = 1 の場合、すでにソートされているので何もしない
	if (range - l == 1)
    {
        return;
    }

	// 2つに分割するために真ん中の値を求める
	int median = (l + range) / 2;
    // はじめの値 ~ 真ん中の値
	Sort(l, median);
    // 真ん中の値 ~ 最後の値
	Sort(median, range);
	
	// この時点で以下の 2 つの配列がソートされている：
	// 列A' に相当するもの [A[l], A[l+1], ..., A[m−1]]
	// 列B' に相当するもの [A[median], A[median+1], ..., A[r−1]]

	// Merge操作
    Merge(l, median, range);
}

// Merge操作
// 用意した列Cに対して操作を行う
// 以下の操作を、列A、Bの要素のすべての要素が消えるまで繰り返す
// - 列Aが空であれば、列Bで最小の要素を列Cに移す
// - 列Bが空であれば、列Aで最小の要素を列Cに移す
// - そのいずれでもなければ、列Aで残っている最小の要素と、列Bで残っている最小の要素を比較し、小さい方を列Cに移す
void Merge(int l, int median, int range)
{
    int c1 = l;
    int c2 = median;
    int cnt = 0;

	while (c1 != median || c2 != range)
    {
		if (c1 == median)
        {
			// 列A'が空の場合
			C[cnt] = A[c2];
            c2++;
		} else if(c2 == range)
        {
			// 列B'が空の場合（抜けている部分）
			C[cnt] = A[c1];
            c1++;
		} else
        {
			// そのいずれでもない場合（抜けている部分）
			if (A[c1] <= A[c2])
            {
				C[cnt] = A[c1]; c1++;
			} else
            {
				C[cnt] = A[c2]; c2++;
			}
		}
		cnt++;
	}
	
	// 列A', 列B'をマージした配列CをAに移す
	// [C[0], ..., C[cnt−1]] −> [A[l], ..., A[r−1]]
	for(int i = 0; i < cnt; i++)
    {
        A[l + i] = C[i];
    }
}
