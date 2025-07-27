#include <stdio.h>

int main()
{
	int x = 0x87654321;
	printf(" 0x%x\n", x & 0xff);
	printf(" 0x%x\n", x ^ (0xff ^ ~0));
	printf(" 0x%x\n", x | 0xff);
}
