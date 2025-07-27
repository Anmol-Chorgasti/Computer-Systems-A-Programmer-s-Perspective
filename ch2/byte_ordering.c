#include <stdio.h>

typedef unsigned char *byte_pointer;
//The above line says byte pointer is a data type which is a pointer to unsigned char types

void show_bytes(byte_pointer start, size_t len)
{
	int i;
	for(i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("/n");	
}

void show_int(int val)
{
	show_bytes( (byte_pointer) &val, sizeof(int));
}

void show_float(float val)
{
	show_bytes( (byte_pointer) &val, sizeof(float));
}

void show_pointer( void *val)
{
	show_bytes( (byte_pointer) &val, sizeof(void *));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float) val;
	int *pval = &val;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main()
{
	test_show_bytes(12345);
}


