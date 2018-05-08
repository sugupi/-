/*配列
変数…1つの値を記憶するもの　int a;
・型と同じ値を代入できる
配列…同じ型の値を複数記憶できるもの　int a [3]
・型と同じ値を要素数と同じ数だけ値を代入できる

配列とポインターの関係
int a [3];
aは[0]のアドレスが入っている

問１
配列を宣言し1.0f 3.0f 4.0fの値を代入し出力しなさい
*/

#include<stdio.h>

int main(void)
{
	float a[3] = { 1.0f,3.0f,4.0f };

	for (int i = 0; i < 3; i++)
		printf("%f\n", a[i]);

	getchar();
	return 0;
}