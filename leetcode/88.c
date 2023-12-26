#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	int x = *(int *)a;
	int y = *(int *)b;
	return x < y ? -1 : (x > y ? 1 : 0);
}

void solve(int *a, int size1, int m, int *b, int size2, int n) {
	for (int i = 0; i < n; i++) {
		a[m + i] = b[i];
	}
	qsort(a, size1, sizeof(int), comp);
}

int main() {
	int a[] = { 1, 4, 5, 2, 0, 0, 0 };
	int b[] = { 7, -5, 3 };
	solve(a, 7, 4, b, 3, 3);

	for (int i = 0; i < 7; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

