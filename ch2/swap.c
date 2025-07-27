#include <stdio.h>


void inplace_swap(int *x, int *y)
{
	*y = *x ^ *y;
	printf(" %d\n",*y);
	*x = *x ^ *y;
	printf(" %d\n", *x);
	*y = *x ^ *y;
	printf(" %d\n", *y);
}

void reverse_array( int a[], int cnt)
{
	int first, last;
	for(first = 0, last = cnt-1; first < last; first++, last--)
	{
		inplace_swap(&a[first], &a[last]);
	}
}

void print_array( int a[], int cnt)
{
	for(int i = 0; i < cnt; ++i)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = {1,2,3,4,5};
	int cnt = 5;
	reverse_array( a, cnt );
	print_array(a, cnt);
}
