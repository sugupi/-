/*問３
配列に記憶した分数を少数で出力しなさい*/

#include<stdio.h>

int main(void)
{
	float a[2] = { 2,3 };

	printf("%f", (float)a[0] / (float)a[1]);

	getchar();
	return 0;
}