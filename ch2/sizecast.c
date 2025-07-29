#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t x)
{
	for(int i = 0; i < x; ++i)
		printf(" %.2x", start[i]);
	printf("\n");
}

int main()
{
	short sx = -12345;
	unsigned short usx = sx; //implicit type conversion
	int x = sx; //size conversion
	unsigned int ux = usx;

	printf("sx = %d:\t", sx); //signed number
	show_bytes( (byte_pointer) &sx, sizeof(short) );
	printf("usx = %u:\t", usx);
	show_bytes( (byte_pointer) &usx, sizeof(unsigned short));
	printf("x = %d:\t", x);
	show_bytes( (byte_pointer) &x, sizeof(int));
	printf("ux = %u:\t", ux);
	show_bytes( (byte_pointer) &ux, sizeof(unsigned int));

}
