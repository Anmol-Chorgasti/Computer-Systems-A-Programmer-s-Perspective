#include <stdio.h>

int bis(int x, int m)
{
	int z = ~(~x & ~m);
	return z;
}

int bic(int x, int m)
{
	int z = x & ~m;
}

int bool_or(int x, int y)
{
	int result = bis(x,y);
	return result;
}

int bool_xor(int x, int y)
{
	int result = bis(bic(x,y), bic(y,x));
	return result;
}

int main()
{
	printf( "%x\n", 56);
	printf("%x\n", 65);
	printf("%x\n", bool_or(56, 65));
	printf("%x\n", bool_xor(56, 65));
}

