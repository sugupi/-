//問２ 2/1と3/1を加算して出力しなさい
#include<stdio.h>
int tasu(int a,int b,int c,int d)
{
	int e;
	int f;
	int g;
	int h;
	e = b*c;
	f = d*a;
	g = b * d;
	h=e + f;
	printf("%d/%d", h, g);
	getchar();
	return h;

	
}

void main()
{
	int a[] = { 1,2,1,3 };

	tasu(a[0], a[1], a[2], a[3]);

}