#include<stdio.h>

int main()
{
	int x = 0x00;

	x |= 0x02;
	x |= 0x08;
	printf("0%x\n", x);


	x = (x << 4);
	printf("%x\n", x);

	int y = 0xaf;



	getchar();
	return 0;
}