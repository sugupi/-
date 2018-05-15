/*再起関数
関数の内で関数をコールして
再起的に実行する

再起関数は引数をメモリに記憶するので
メモリの負担が大きい*/

/*問１　AとBを加算する関数
AとBを減算する関数を作成*/
#include<stdio.h>

int tasu(int a,int b)
{
	return  a + b;

}

int hiku(int a, int b)
{
	return  a - b;

}


void main(void)
{
	int d;

	d = hiku(tasu(4, 5), 3);

	getchar();
	return;
}



