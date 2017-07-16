#include <stdio.h>
#include <math.h>

void update(int *a, int *b)
{
	int temp = 0;
	temp = *a;

	*a = temp + *b;
	*b = temp - *a;
	*b = abs(*b);
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}