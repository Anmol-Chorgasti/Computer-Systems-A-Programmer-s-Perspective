#include <stdio.h>

int main()
{
	unsigned int u = 4294967295u;
	int tu = (int) u;
	printf("u = %u, tu = %d\n", u, tu);
}
