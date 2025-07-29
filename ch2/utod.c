#include <stdio.h>

int main()
{
	unsigned int x = 2147483648;
	int y = -2147483647-1U;
	printf("x = %u = %d\n", x, x);
	printf("%u\n", y);
}
