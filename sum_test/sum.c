#include "sum.h"

int sum(int n)
{
	int sum = 0;
	for (int i = 1; i < n+1; i ++)
		sum += i;
	return sum;
}

int main()
{
	printf("%d", sum(100));
	return 0;
}
